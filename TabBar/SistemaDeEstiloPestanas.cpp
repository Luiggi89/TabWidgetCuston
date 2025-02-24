#include "SistemaDeEstiloPestanas.h"

SistemaDeEstiloPestanas::SistemaDeEstiloPestanas(QObject *parent)
    : QObject{parent}
{}

QPoint SistemaDeEstiloPestanas::getIsMouseHover() const
{
    return isMouseHover;
}

void SistemaDeEstiloPestanas::setIsMouseHover(QPoint newIsMouseHover)
{
    if (isMouseHover == newIsMouseHover)
        return;
    isMouseHover = newIsMouseHover;
    emit isMouseHoverChanged();
}
