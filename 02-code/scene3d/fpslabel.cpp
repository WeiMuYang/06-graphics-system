#include "fpslabel.h"
#include <QPainter>
#include <QDateTime>
#include <QDebug>

FPSLabel::FPSLabel(QQuickItem *parent): QQuickPaintedItem(parent)
{
    setFlag(QQuickItem::ItemHasContents);
}


void FPSLabel::refreshFPS()
{
    qint64 currentTime = QDateTime::currentDateTime().toMSecsSinceEpoch();
    m_frames.push_back(currentTime);

    while (m_frames[0] < (currentTime - 1000)) {
        m_frames.pop_front();
    }

    int currentCount = m_frames.length();
    m_value = (currentCount + m_cacheCount) / 2;

    if (currentCount != m_cacheCount) {
        emit valueChanged(m_value);
    }

    m_cacheCount = currentCount;
}

int FPSLabel::value() const
{
    return m_value;
}

void FPSLabel::paint(QPainter *painter)
{
    refreshFPS();

    QBrush brush(Qt::white);
    painter->setBrush(brush);
    painter->setRenderHint(QPainter::Antialiasing);

    QPen pen = painter->pen();
    pen.setColor(Qt::white);
    painter->setPen(pen);
    painter->drawRoundedRect(0, 0, boundingRect().width(), boundingRect().height()-2, 0, 0);


    QFont font = painter->font();
    font.setPixelSize(qMin(width(), height()) * 0.6);
    painter->setFont(font);


    pen.setColor(Qt::red);
    painter->setPen(pen);
    painter->drawText(boundingRect(), Qt::AlignCenter, QString("FPS:%1").arg(m_value));

    update();
}
