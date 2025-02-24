#include "customtabbar.h"

CustomTabBar::CustomTabBar(QWidget *parent)
    : QTabBar{parent}
{}


void CustomTabBar::tabInserted(int index)
{
    QTabBar::tabInserted(index);
    sistemaDeUbicacionPestana->InsertarInformacionPestanas(index, count(), tabSizeHint(index),)
}



QSize CustomTabBar::tabSizeHint(int index) const
{
    return sistemaDeUbicacionPestana->getAreaDeLaPestana();
}


QSize CustomTabBar::minimumSizeHint() const
{
    return QSize(0,0);
}

