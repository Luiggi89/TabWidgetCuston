#ifndef SISTEMADEDIBUJOTEXTO_H
#define SISTEMADEDIBUJOTEXTO_H

#include <QObject>
#include <QColor>
#include <QRect>
#include <QStylePainter>
#include <QStyleOptionTab>
#include "customtabbar.h"

class SistemaDeDibujoTexto : public QObject
{
    Q_OBJECT
public:
    explicit SistemaDeDibujoTexto(QObject *parent = nullptr);

private:
    QColor colorText;
    QRect textRect;
    QString elidedText;

private:
    void actualizarText(QStyleOptionTab &opt, CustomTabBar *tabBar);
    void dibujarTexto(QStylePainter &painter, QStyleOptionTab opt);

signals:
};

#endif // SISTEMADEDIBUJOTEXTO_H
