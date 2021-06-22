#ifndef FPSLABEL_H
#define FPSLABEL_H

#include <QObject>
#include <QQuickItem>
#include <QQuickPaintedItem>
#include <QVector>

class FPSLabel : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(int value READ value NOTIFY valueChanged)
public:
    explicit FPSLabel(QQuickItem *parent = 0);


    int value() const;

    void paint(QPainter *);

signals:
    void valueChanged(int);

public slots:

private:
    void refreshFPS();
    int m_value = -1;
    int m_cacheCount = 0;
    QVector<qint64> m_frames;
};

#endif // FPSLABEL_H
