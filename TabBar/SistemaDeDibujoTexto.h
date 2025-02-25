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
    Q_PROPERTY(QColor colorTextoCambiar READ getColorTextoCambiar WRITE setColorTextoCambiar NOTIFY colorTextoCambiarChanged FINAL)
    Q_PROPERTY(bool cambiarColorTexto READ getCambiarColorTexto WRITE setCambiarColorTexto NOTIFY cambiarColorTextoChanged FINAL)

public:
    explicit SistemaDeDibujoTexto(QObject *parent = nullptr);

private:
    int margenDerechoTextoDerecho = 10;

    QColor colorText;

    QColor colorTextoCambiar;
    bool cambiarColorTexto;

    QRect textRect;
    QString elidedText;



public:
    void actualizarText(QStyleOptionTab &opt, QTabBar *tabBar);
    void dibujarTexto(QStylePainter &painter, QStyleOptionTab opt);
    QSize adaptarTextoConLaPestaña(QSize anchoDeLaPestanaIndividual, QString texTab, QFont fontText);

    int getMargenDerechoTextoDerecho() const;
    void setMargenDerechoTextoDerecho(int newMargenDerechoTextoDerecho);

    QColor getColorTextoCambiar() const;
    void setColorTextoCambiar(const QColor &newColorTextoCambiar);

    bool getCambiarColorTexto() const;
    void setCambiarColorTexto(bool newCambiarColorTexto);

signals:
    void margenDerechoTextoDerechoChanged();
    void colorTextoCambiarChanged();
    void cambiarColorTextoChanged();
};

#endif // SISTEMADEDIBUJOTEXTO_H
