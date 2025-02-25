#ifndef SISTEMADEESTILOPESTANAS_H
#define SISTEMADEESTILOPESTANAS_H

#pragma once


#include <QHoverEvent>
#include <QObject>
#include <QStyleOptionTab>

class CustomTabBar;

class SistemaDeEstiloPestanas : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QPoint isMouseHover READ getIsMouseHover WRITE setIsMouseHover NOTIFY isMouseHoverChanged FINAL)
    Q_PROPERTY(QColor colorFondoCambiar READ getColorFondoCambiar WRITE setColorFondoCambiar NOTIFY colorFondoCambiarChanged FINAL)
    Q_PROPERTY(bool cambiarColor READ getCambiarColor WRITE setCambiarColor NOTIFY cambiarColorChanged FINAL)

public:
    explicit SistemaDeEstiloPestanas(QObject *parent = nullptr);

private:
    QColor colorFondoCambiar;
    bool cambiarColor;

    QPoint reinicio = QPoint (99999,99999);
    QPoint isMouseHover = reinicio;
    int cualPestanaPrecione = -1;



public:

    void actualizarEstiloDeLasPestanas(QStyleOptionTab *option, int tabIndex, const CustomTabBar* tabBar) const;
    void hoverIsMauseHover(QHoverEvent *hoverEvent);
    void reinicioPointIsMauseHover();
    void IsPrecionePestanas(QPoint pointnext, CustomTabBar *tabBar);

    QPoint getIsMouseHover() const;
    void setIsMouseHover(QPoint newIsMouseHover);

    QColor getColorFondoCambiar() const;
    void setColorFondoCambiar(const QColor &newColorFondoCambiar);

    bool getCambiarColor() const;
    void setCambiarColor(bool newCambiarColor);

signals:
    void isMouseHoverChanged();
    void colorFondoCambiarChanged();
    void cambiarColorChanged();
};

#endif // SISTEMADEESTILOPESTANAS_H
