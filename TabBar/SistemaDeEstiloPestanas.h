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

public:
    explicit SistemaDeEstiloPestanas(QObject *parent = nullptr);

private:
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

signals:
    void isMouseHoverChanged();
};

#endif // SISTEMADEESTILOPESTANAS_H
