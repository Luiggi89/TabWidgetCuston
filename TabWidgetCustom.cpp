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

EstiloQss::ActivacionCustom TabWidgetCustom::getEstiloDePestanas() const
{
    return estiloDePestanas;
}

void TabWidgetCustom::setEstiloDePestanas(EstiloQss::ActivacionCustom newEstiloDePestanas)
{
    if (estiloDePestanas == newEstiloDePestanas)
        return;
    estiloDePestanas = newEstiloDePestanas;
    estiloQss->setActivacion(estiloDePestanas);
    estiloQss->atualizacionDeEstado(tabBar);
    emit estiloDePestanasChanged();
}

QFont TabWidgetCustom::getFondDeLetra() const
{
    return FondDeLetra;
}

void TabWidgetCustom::setFondDeLetra(const QFont &newFondDeLetra)
{
    if (FondDeLetra == newFondDeLetra)
        return;
    FondDeLetra = newFondDeLetra;
    estiloQss->setFondDeLetra(FondDeLetra);
    estiloQss->atualizacionDeEstado(tabBar);
    emit FondDeLetraChanged();
}

QColor TabWidgetCustom::getFondoTabPredeterminado() const
{
    return fondoTabPredeterminado;
}

void TabWidgetCustom::setFondoTabPredeterminado(const QColor &newFondoTabPredeterminado)
{
    if (fondoTabPredeterminado == newFondoTabPredeterminado)
        return;
    fondoTabPredeterminado = newFondoTabPredeterminado;
    estiloQss->setFondoTabPredeterminado(fondoTabPredeterminado);
    estiloQss->atualizacionDeEstado(tabBar);
    emit fondoTabPredeterminadoChanged();
}

QColor TabWidgetCustom::getFondoTabHover() const
{
    return fondoTabHover;
}

void TabWidgetCustom::setFondoTabHover(const QColor &newFondoTabHover)
{
    if (fondoTabHover == newFondoTabHover)
        return;
    fondoTabHover = newFondoTabHover;
    estiloQss->setFondoTabHover(fondoTabHover);
    estiloQss->atualizacionDeEstado(tabBar);
    emit fondoTabHoverChanged();
}

QColor TabWidgetCustom::getFondoTabPrecionado() const
{
    return fondoTabPrecionado;
}

void TabWidgetCustom::setFondoTabPrecionado(const QColor &newFondoTabPrecionado)
{
    if (fondoTabPrecionado == newFondoTabPrecionado)
        return;
    fondoTabPrecionado = newFondoTabPrecionado;
    estiloQss->setFondoTabPrecionado(fondoTabPrecionado);
    estiloQss->atualizacionDeEstado(tabBar);
    emit fondoTabPrecionadoChanged();
}

QColor TabWidgetCustom::getFondoTabSelecionado() const
{
    return fondoTabSelecionado;
}

void TabWidgetCustom::setFondoTabSelecionado(const QColor &newFondoTabSelecionado)
{
    if (fondoTabSelecionado == newFondoTabSelecionado)
        return;
    fondoTabSelecionado = newFondoTabSelecionado;
    estiloQss->setFondoTabSelecionado(fondoTabSelecionado);
    estiloQss->atualizacionDeEstado(tabBar);
    emit fondoTabSelecionadoChanged();
}

QColor TabWidgetCustom::getColorBordeTabPredeterminado() const
{
    return colorBordeTabPredeterminado;
}

void TabWidgetCustom::setColorBordeTabPredeterminado(const QColor &newColorBordeTabPredeterminado)
{
    if (colorBordeTabPredeterminado == newColorBordeTabPredeterminado)
        return;
    colorBordeTabPredeterminado = newColorBordeTabPredeterminado;
    estiloQss->setColorBordeTabPredeterminado(colorBordeTabPredeterminado);
    estiloQss->atualizacionDeEstado(tabBar);
    emit colorBordeTabPredeterminadoChanged();
}

QColor TabWidgetCustom::getColorBordeTabHover() const
{
    return colorBordeTabHover;
}

void TabWidgetCustom::setColorBordeTabHover(const QColor &newColorBordeTabHover)
{
    if (colorBordeTabHover == newColorBordeTabHover)
        return;
    colorBordeTabHover = newColorBordeTabHover;
    estiloQss->setColorBordeTabHover(colorBordeTabHover);
    estiloQss->atualizacionDeEstado(tabBar);
    emit colorBordeTabHoverChanged();
}

QColor TabWidgetCustom::getColorBordeTabPrecionado() const
{
    return colorBordeTabPrecionado;
}

void TabWidgetCustom::setColorBordeTabPrecionado(const QColor &newColorBordeTabPrecionado)
{
    if (colorBordeTabPrecionado == newColorBordeTabPrecionado)
        return;
    colorBordeTabPrecionado = newColorBordeTabPrecionado;
    estiloQss->setColorBordeTabPrecionado(colorBordeTabPrecionado);
    estiloQss->atualizacionDeEstado(tabBar);
    emit colorBordeTabPrecionadoChanged();
}

QColor TabWidgetCustom::getColorBordeTabSelecionado() const
{
    return colorBordeTabSelecionado;
}

void TabWidgetCustom::setColorBordeTabSelecionado(const QColor &newColorBordeTabSelecionado)
{
    if (colorBordeTabSelecionado == newColorBordeTabSelecionado)
        return;
    colorBordeTabSelecionado = newColorBordeTabSelecionado;
    estiloQss->setColorBordeTabSelecionado(colorBordeTabSelecionado);
    estiloQss->atualizacionDeEstado(tabBar);
    emit colorBordeTabSelecionadoChanged();
}

int TabWidgetCustom::getRadioIzquierdoArriba() const
{
    return radioIzquierdoArriba;
}

void TabWidgetCustom::setRadioIzquierdoArriba(int newRadioIzquierdoArriba)
{
    if (radioIzquierdoArriba == newRadioIzquierdoArriba)
        return;
    radioIzquierdoArriba = newRadioIzquierdoArriba;
    estiloQss->setRadioIzquierdoArriba(radioIzquierdoArriba);
    estiloQss->atualizacionDeEstado(tabBar);
    emit radioIzquierdoArribaChanged();
}

int TabWidgetCustom::getRadioIzquierdoAbajo() const
{
    return radioIzquierdoAbajo;
}

void TabWidgetCustom::setRadioIzquierdoAbajo(int newRadioIzquierdoAbajo)
{
    if (radioIzquierdoAbajo == newRadioIzquierdoAbajo)
        return;
    radioIzquierdoAbajo = newRadioIzquierdoAbajo;
    estiloQss->setRadioIzquierdoAbajo(radioIzquierdoAbajo);
    estiloQss->atualizacionDeEstado(tabBar);
    emit radioIzquierdoAbajoChanged();
}

int TabWidgetCustom::getRadioDerechoArriba() const
{
    return radioDerechoArriba;
}

void TabWidgetCustom::setRadioDerechoArriba(int newRadioDerechoArriba)
{
    if (radioDerechoArriba == newRadioDerechoArriba)
        return;
    radioDerechoArriba = newRadioDerechoArriba;
    estiloQss->setRadioDerechoArriba(radioDerechoArriba);
    estiloQss->atualizacionDeEstado(tabBar);
    emit radioDerechoArribaChanged();
}

int TabWidgetCustom::getRadioDerechoAbajo() const
{
    return radioDerechoAbajo;
}

void TabWidgetCustom::setRadioDerechoAbajo(int newRadioDerechoAbajo)
{
    if (radioDerechoAbajo == newRadioDerechoAbajo)
        return;
    radioDerechoAbajo = newRadioDerechoAbajo;
    estiloQss->setRadioDerechoAbajo(radioDerechoAbajo);
    estiloQss->atualizacionDeEstado(tabBar);
    emit radioDerechoAbajoChanged();
}
