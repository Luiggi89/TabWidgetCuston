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
    Q_PROPERTY(int margenDerechoTextoDerecho READ getMargenDerechoTextoDerecho WRITE setMargenDerechoTextoDerecho NOTIFY margenDerechoTextoDerechoChanged FINAL)

public:
    explicit SistemaDeDibujoTexto(QObject *parent = nullptr);

private:
    int margenDerechoTextoDerecho;

    QColor colorText;
    QRect textRect;
    QString elidedText;


public:
    void actualizarText(QStyleOptionTab &opt, QTabBar *tabBar);
    void dibujarTexto(QStylePainter &painter, QStyleOptionTab opt);
    QSize adaptarTextoConLaPestaña(QSize anchoDeLaPestanaIndividual, QString texTab, QFont fontText);

    int getMargenDerechoTextoDerecho() const;
    void setMargenDerechoTextoDerecho(int newMargenDerechoTextoDerecho);

signals:
    void margenDerechoTextoDerechoChanged();
};

#endif // SISTEMADEDIBUJOTEXTO_H
