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

bool TabWidgetCustom::getActivacionCustomEstiloQss() const
{
    return activacionCustomEstiloQss;
}

void TabWidgetCustom::setActivacionCustomEstiloQss(bool newActivacionCustomEstiloQss)
{
    if (activacionCustomEstiloQss == newActivacionCustomEstiloQss)
        return;
    activacionCustomEstiloQss = newActivacionCustomEstiloQss;

    estiloQss->setActivacionCustom(activacionCustomEstiloQss);
    estiloQss->atualizacionDeEstado(tabBar);

    emit activacionCustomEstiloQssChanged();
}

QPoint TabWidgetCustom::getPaddingTexto() const
{
    return PaddingTexto;
}

void TabWidgetCustom::setPaddingTexto(QPoint newPaddingTexto)
{
    if (PaddingTexto == newPaddingTexto)
        return;
    PaddingTexto = newPaddingTexto;
    sistemaDeDibujosTexto->setPadingTexto(PaddingTexto);
    emit PaddingTextoChanged();
}

int TabWidgetCustom::getAumentarLargoContenedor() const
{
    return aumentarLargoContenedor;
}

void TabWidgetCustom::setAumentarLargoContenedor(int newAumentarLargoContenedor)
{
    if (aumentarLargoContenedor == newAumentarLargoContenedor)
        return;
    aumentarLargoContenedor = newAumentarLargoContenedor;
    sistemaDeUbicacionPestanas->setAumentar_Largo_Y_Delcontenedor(aumentarLargoContenedor);
    tabBar->resizeVoid();
    emit aumentarLargoContenedorChanged();
}

int TabWidgetCustom::getMovimientoYDelasPestanas() const
{
    return movimientoYDelasPestanas;
}

void TabWidgetCustom::setMovimientoYDelasPestanas(int newMovimientoYDelasPestanas)
{
    if (movimientoYDelasPestanas == newMovimientoYDelasPestanas)
        return;
    movimientoYDelasPestanas = newMovimientoYDelasPestanas;
    sistemaDeUbicacionPestanas->setMovimientoYDelasPestanas(movimientoYDelasPestanas);
    emit movimientoYDelasPestanasChanged();
}
