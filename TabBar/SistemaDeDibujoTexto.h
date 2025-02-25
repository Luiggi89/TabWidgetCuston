#ifndef SISTEMADEDIBUJOTEXTO_H
#define SISTEMADEDIBUJOTEXTO_H
#pragma once

#include <QObject>
#include <QColor>
#include <QRect>
#include <QStylePainter>
#include <QStyleOptionTab>
#include <QTabBar>


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
    void actualizarText(QStyleOptionTab &opt, QTabBar *tabBar);
    void dibujarTexto(QStylePainter &painter, QStyleOptionTab opt);

signals:
};

#endif // SISTEMADEDIBUJOTEXTO_H
