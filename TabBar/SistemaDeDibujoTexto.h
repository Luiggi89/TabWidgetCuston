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

    QPoint PadingTexto = QPoint(0,0);

    int margenDerechoTextoDerecho = 10;

    QColor colorText;

    QColor colorTextoCambiar;
    bool cambiarColorTexto;

    QRect textRect;
    QString elidedText;



    Q_PROPERTY(QPoint PadingTexto READ getPadingTexto WRITE setPadingTexto NOTIFY PadingTextoChanged FINAL)

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

    QPoint getPadingTexto() const;
    void setPadingTexto(QPoint newPadingTexto);

signals:
    void margenDerechoTextoDerechoChanged();
    void colorTextoCambiarChanged();
    void cambiarColorTextoChanged();
    void PadingTextoChanged();
};

#endif // SISTEMADEDIBUJOTEXTO_H
