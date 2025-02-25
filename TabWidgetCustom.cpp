#include "TabWidgetCustom.h"

TabWidgetCustom::TabWidgetCustom(QWidget *parent) :
    QTabWidget(parent)
{
    setTabBar(tabBar);
}

QSize TabWidgetCustom::getAreaDePestanas() const
{
    return areaDePestanas;
}

void TabWidgetCustom::setAreaDePestanas(const QSize &newAreaDePestanas)
{
    if (areaDePestanas == newAreaDePestanas)
        return;
    areaDePestanas = newAreaDePestanas;
    sistemaDeUbicacionPestanas->setAreaDeLaPestana(areaDePestanas);
    tabBar->resize(tabBar->resizeVoid());
    emit areaDePestanasChanged();
}

int TabWidgetCustom::getSeparacionEntrePestana() const
{
    return separacionEntrePestana;
}

void TabWidgetCustom::setSeparacionEntrePestana(int newSeparacionEntrePestana)
{
    if (separacionEntrePestana == newSeparacionEntrePestana)
        return;
    separacionEntrePestana = newSeparacionEntrePestana;
    sistemaDeUbicacionPestanas->setSeparacionPestana(separacionEntrePestana);
    tabBar->resize(tabBar->resizeVoid());

    emit separacionEntrePestanaChanged();
}

int TabWidgetCustom::getMargenDeTextoDerecha() const
{
    return MargenDeTextoDerecha;
}

void TabWidgetCustom::setMargenDeTextoDerecha(int newMargenDeTextoDerecha)
{
    if (MargenDeTextoDerecha == newMargenDeTextoDerecha)
        return;
    MargenDeTextoDerecha = newMargenDeTextoDerecha;
    sistemaDeDibujosTexto->setMargenDerechoTextoDerecho(MargenDeTextoDerecha);
    repaint();
    emit MargenDeTextoDerechaChanged();
}

QColor TabWidgetCustom::getColorTexto() const
{
    return colorTexto;
}

void TabWidgetCustom::setColorTexto(const QColor &newColorTexto)
{
    if (colorTexto == newColorTexto)
        return;
    colorTexto = newColorTexto;
    sistemaDeDibujosTexto->setColorTextoCambiar(colorTexto);
    repaint();
    emit colorTextoChanged();
}

bool TabWidgetCustom::getCambiarColorTexto() const
{
    return cambiarColorTexto;
}

void TabWidgetCustom::setCambiarColorTexto(bool newCambiarColorTexto)
{
    if (cambiarColorTexto == newCambiarColorTexto)
        return;
    cambiarColorTexto = newCambiarColorTexto;
    sistemaDeDibujosTexto->setCambiarColorTexto(cambiarColorTexto);
    repaint();
    emit cambiarColorTextoChanged();
}

QColor TabWidgetCustom::getColorFondo() const
{
    return ColorFondo;
}

void TabWidgetCustom::setColorFondo(const QColor &newColorFondo)
{
    if (ColorFondo == newColorFondo)
        return;
    ColorFondo = newColorFondo;
    sistemaDeEstiloPestanas->setColorFondoCambiar(ColorFondo);
    repaint();
    emit ColorFondoChanged();
}

bool TabWidgetCustom::getCambiarColorFondo() const
{
    return cambiarColorFondo;
}

void TabWidgetCustom::setCambiarColorFondo(bool newCambiarColorFondo)
{
    if (cambiarColorFondo == newCambiarColorFondo)
        return;
    cambiarColorFondo = newCambiarColorFondo;
    sistemaDeEstiloPestanas->setCambiarColor(cambiarColorFondo);
    repaint();
    emit cambiarColorFondoChanged();
}

int TabWidgetCustom::getSencibilidad() const
{
    return sencibilidad;
}

void TabWidgetCustom::setSencibilidad(int newSencibilidad)
{
    if (sencibilidad == newSencibilidad)
        return;
    sencibilidad = newSencibilidad;
    sistemaDeScrool->setSensibilidad(sencibilidad);
    emit sencibilidadChanged();
}
