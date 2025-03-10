#include "estiloqss.h"

EstiloQss::EstiloQss(QObject *parent)
    : QObject{parent}
{}

QString EstiloQss::estiloDeLetra(QFont letra)
{
    int tamanoDeLETRA = letra.pointSize();
    QString tamanoDeletra = QString::number(tamanoDeLETRA);
    QString grosorDeLetra = letra.styleName();
    QString FamiliaDeLETRA = letra.family();
    QString comillas = "\"";

    return "font:" + grosorDeLetra + tamanoDeletra + comillas+ FamiliaDeLETRA + comillas +" ;";
}

QString EstiloQss::fondoTabBar(QColor fondo)
{
    QString color = fondo.name();

    return "background-color:" + color + ";";
}

QString EstiloQss::colorBorde(QColor colorBorde)
{
    QString colorBordeEscrito = colorBorde.name();

    return "border-color:" + colorBordeEscrito + ";";

}

QString EstiloQss::bordesRadiusIzquierdaArriba(int radioIzquierda)
{
    QString radio = QString::number(radioIzquierda);

    return "border-top-left-radius:"+ radio + ";";
}

QString EstiloQss::bordesRadiusAbajoIzquierda(int radioArribar)
{
    QString radio = QString::number(radioArribar);

    return "border-bottom-left-radius:" + radio + ";";
}

QString EstiloQss::bordesRadiusDerechaArriba(int radioDerechas)
{
    QString radio = QString::number(radioDerechas);

    return "border-top-right-radius:"+ radio +  ";";
}

QString EstiloQss::bordesRadiusAbajoDerecha(int radioAbajo)
{
    QString radio = QString::number(radioAbajo);

    return "border-bottom-right-radius:" + radio + ";";
}

QString EstiloQss::bordesGrosorArriba(int grosor, QColor color)
{
    QString grosorTexto = QString::number(grosor);
    QString colorDeTexto = color.name();

    return "border-top: " + grosorTexto + "px " + "solid " + colorDeTexto;
}

QString EstiloQss::bordesGrosorIzquierda(int grosor, QColor color)
{
    QString grosorTexto = QString::number(grosor);
    QString colorDeTexto = color.name();

    return "border-left: " + grosorTexto + "px " + "solid " + colorDeTexto;
}

QString EstiloQss::bordesGrosorDerecha(int grosor, QColor color)
{
    QString grosorTexto = QString::number(grosor);
    QString colorDeTexto = color.name();

    return "border-right: " + grosorTexto + "px " + "solid " + colorDeTexto;
}

QString EstiloQss::bordesGrosorAbajo(int grosor, QColor color)
{
    QString grosorTexto = QString::number(grosor);
    QString colorDeTexto = color.name();

    return "border-bottom: " + grosorTexto + "px " + "solid " + colorDeTexto;
}

QString EstiloQss::TabIndividual(QString complementario)
{
    return "QTabBar::tab { " + complementario + "} ";
}

QString EstiloQss::TabIndividualHover(QString complementario)
{
    return "QTabBar::tab:hover{ " + complementario + "} ";
}

QString EstiloQss::TabIndividualPresione(QString complementario)
{
    return "QTabBar::tab:pressed{ " + complementario + " } ";
}

QString EstiloQss::TabIndividualSelecionado(QString complementario)
{
    return "QTabBar::tab:selected{" + complementario + "} ";
}

QString EstiloQss::TabInfomacionPredeterminado()
{
    return TabIndividual(estiloDeLetra(FondDeLetra) +
                         fondoTabBar(fondoTabPredeterminado)+
                         bordesGrosorArriba(bordeSuperiorPredeterminado,colorBordeTabPredeterminadoSuperior)+
                         bordesGrosorAbajo(bordeInferiorPredeterminado, colorBordeTabPredeterminadoInferior)+
                         bordesGrosorDerecha(bordeDerechoPredeterminado, colorBordeTabPredeterminadoDerecho)+
                         bordesGrosorIzquierda(bordeIzquierdaPredeterminado, colorBordeTabPredeterminadoIzquierdo)+
                         bordesRadiusIzquierdaArriba(radioIzquierdoArriba) +
                         bordesRadiusAbajoIzquierda(radioIzquierdoAbajo)+
                         bordesRadiusDerechaArriba(radioDerechoArriba) +
                         bordesRadiusAbajoDerecha(radioDerechoAbajo));
}

QString EstiloQss::TabInformacionHover()
{
    return TabIndividualHover(estiloDeLetra(FondDeLetra) +
                              fondoTabBar(fondoTabHover)+
                              bordesGrosorArriba(bordeSuperiorHover,colorBordeTabHoverSuperior)+
                              bordesGrosorAbajo(bordeInferiorHover, colorBordeTabHoverInferior)+
                              bordesGrosorDerecha(bordeDerechoHover, colorBordeTabHoverDerecho)+
                              bordesGrosorIzquierda(bordeIzquierdaHover, colorBordeTabHoverIzquierdo)+
                              bordesRadiusIzquierdaArriba(radioIzquierdoArriba) +
                              bordesRadiusAbajoIzquierda(radioIzquierdoAbajo)+
                              bordesRadiusDerechaArriba(radioDerechoArriba) +
                              bordesRadiusAbajoDerecha(radioDerechoAbajo));
}

QString EstiloQss::TabInformacionPresione()
{
    return TabIndividualHover(estiloDeLetra(FondDeLetra) +
                              fondoTabBar(fondoTabPrecionado)+
                              bordesGrosorArriba(bordeSuperiorPresionado,colorBordeTabPrecionadoSuperior)+
                              bordesGrosorAbajo(bordeInferiorPresionado, colorBordeTabPrecionadoInferior)+
                              bordesGrosorDerecha(bordeDerechoPresionado, colorBordeTabPrecionadoDerecho)+
                              bordesGrosorIzquierda(bordeIzquierdaPresionado, colorBordeTabPrecionadoIzquierdo)+
                              bordesRadiusIzquierdaArriba(radioIzquierdoArriba) +
                              bordesRadiusAbajoIzquierda(radioIzquierdoAbajo)+
                              bordesRadiusDerechaArriba(radioDerechoArriba) +
                              bordesRadiusAbajoDerecha(radioDerechoAbajo));
}

QString EstiloQss::tabInformacionSelecionado()
{
    return TabIndividualSelecionado(estiloDeLetra(FondDeLetra) +
                                    fondoTabBar(fondoTabSelecionado)+
                                    bordesGrosorArriba(bordeSuperiorSelecionado,colorBordeTabSelecionadoSuperior)+
                                    bordesGrosorAbajo(bordeInferiorSelecionado, colorBordeTabSelecionadoInferior)+
                                    bordesGrosorDerecha(bordeDerechoSelecionado, colorBordeTabSelecionadoDerecho)+
                                    bordesGrosorIzquierda(bordeIzquierdaSelecionado, colorBordeTabPrecionadoIzquierdo)+
                                    bordesRadiusIzquierdaArriba(radioIzquierdoArriba) +
                                    bordesRadiusAbajoIzquierda(radioIzquierdoAbajo)+
                                    bordesRadiusDerechaArriba(radioDerechoArriba) +
                                    bordesRadiusAbajoDerecha(radioDerechoAbajo));
}

void EstiloQss::atualizacionDeEstado(CustomTabBar *tabBar)
{
    if (!activacionCustom)
    {
        tabBar->setStyleSheet("");
    }else if (activacionCustom) {
        tabBar->setStyleSheet(TabInfomacionPredeterminado() +
                             TabInformacionHover() +
                             TabInformacionPresione()+
                             tabInformacionSelecionado());
    }

}

QFont EstiloQss::getFondDeLetra() const
{
    return FondDeLetra;
}

void EstiloQss::setFondDeLetra(const QFont &newFondDeLetra)
{
    if (FondDeLetra == newFondDeLetra)
        return;
    FondDeLetra = newFondDeLetra;
    emit FondDeLetraChanged();
}

QColor EstiloQss::getFondoTabPredeterminado() const
{
    return fondoTabPredeterminado;
}

void EstiloQss::setFondoTabPredeterminado(const QColor &newFondoTabPredeterminado)
{
    if (fondoTabPredeterminado == newFondoTabPredeterminado)
        return;
    fondoTabPredeterminado = newFondoTabPredeterminado;
    emit fondoTabPredeterminadoChanged();
}

QColor EstiloQss::getFondoTabHover() const
{
    return fondoTabHover;
}

void EstiloQss::setFondoTabHover(const QColor &newFondoTabHover)
{
    if (fondoTabHover == newFondoTabHover)
        return;
    fondoTabHover = newFondoTabHover;
    emit fondoTabHoverChanged();
}

QColor EstiloQss::getFondoTabPrecionado() const
{
    return fondoTabPrecionado;
}

void EstiloQss::setFondoTabPrecionado(const QColor &newFondoTabPrecionado)
{
    if (fondoTabPrecionado == newFondoTabPrecionado)
        return;
    fondoTabPrecionado = newFondoTabPrecionado;
    emit fondoTabPrecionadoChanged();
}

QColor EstiloQss::getFondoTabSelecionado() const
{
    return fondoTabSelecionado;
}

void EstiloQss::setFondoTabSelecionado(const QColor &newFondoTabSelecionado)
{
    if (fondoTabSelecionado == newFondoTabSelecionado)
        return;
    fondoTabSelecionado = newFondoTabSelecionado;
    emit fondoTabSelecionadoChanged();
}

int EstiloQss::getRadioIzquierdoArriba() const
{
    return radioIzquierdoArriba;
}

void EstiloQss::setRadioIzquierdoArriba(int newRadioIzquierdoArriba)
{
    if (radioIzquierdoArriba == newRadioIzquierdoArriba)
        return;
    radioIzquierdoArriba = newRadioIzquierdoArriba;
    emit radioIzquierdoArribaChanged();
}

int EstiloQss::getRadioIzquierdoAbajo() const
{
    return radioIzquierdoAbajo;
}

void EstiloQss::setRadioIzquierdoAbajo(int newRadioIzquierdoAbajo)
{
    if (radioIzquierdoAbajo == newRadioIzquierdoAbajo)
        return;
    radioIzquierdoAbajo = newRadioIzquierdoAbajo;
    emit radioIzquierdoAbajoChanged();
}

int EstiloQss::getRadioDerechoArriba() const
{
    return radioDerechoArriba;
}

void EstiloQss::setRadioDerechoArriba(int newRadioDerechoArriba)
{
    if (radioDerechoArriba == newRadioDerechoArriba)
        return;
    radioDerechoArriba = newRadioDerechoArriba;
    emit radioDerechoArribaChanged();
}

int EstiloQss::getRadioDerechoAbajo() const
{
    return radioDerechoAbajo;
}

void EstiloQss::setRadioDerechoAbajo(int newRadioDerechoAbajo)
{
    if (radioDerechoAbajo == newRadioDerechoAbajo)
        return;
    radioDerechoAbajo = newRadioDerechoAbajo;
    emit radioDerechoAbajoChanged();
}
bool EstiloQss::getActivacionCustom() const
{
    return activacionCustom;
}

void EstiloQss::setActivacionCustom(bool newActivacionCustom)
{
    if (activacionCustom == newActivacionCustom)
        return;
    activacionCustom = newActivacionCustom;
    emit activacionCustomChanged();
}

QColor EstiloQss::getColorBordeTabPredeterminadoSuperior() const
{
    return colorBordeTabPredeterminadoSuperior;
}

void EstiloQss::setColorBordeTabPredeterminadoSuperior(const QColor &newColorBordeTabPredeterminadoSuperior)
{
    if (colorBordeTabPredeterminadoSuperior == newColorBordeTabPredeterminadoSuperior)
        return;
    colorBordeTabPredeterminadoSuperior = newColorBordeTabPredeterminadoSuperior;
    emit colorBordeTabPredeterminadoSuperiorChanged();
}

QColor EstiloQss::getColorBordeTabHoverSuperior() const
{
    return colorBordeTabHoverSuperior;
}

void EstiloQss::setColorBordeTabHoverSuperior(const QColor &newColorBordeTabHoverSuperior)
{
    if (colorBordeTabHoverSuperior == newColorBordeTabHoverSuperior)
        return;
    colorBordeTabHoverSuperior = newColorBordeTabHoverSuperior;
    emit colorBordeTabHoverSuperiorChanged();
}

QColor EstiloQss::getColorBordeTabPrecionadoSuperior() const
{
    return colorBordeTabPrecionadoSuperior;
}

void EstiloQss::setColorBordeTabPrecionadoSuperior(const QColor &newColorBordeTabPrecionadoSuperior)
{
    if (colorBordeTabPrecionadoSuperior == newColorBordeTabPrecionadoSuperior)
        return;
    colorBordeTabPrecionadoSuperior = newColorBordeTabPrecionadoSuperior;
    emit colorBordeTabPrecionadoSuperiorChanged();
}

QColor EstiloQss::getColorBordeTabSelecionadoSuperior() const
{
    return colorBordeTabSelecionadoSuperior;
}

void EstiloQss::setColorBordeTabSelecionadoSuperior(const QColor &newColorBordeTabSelecionadoSuperior)
{
    if (colorBordeTabSelecionadoSuperior == newColorBordeTabSelecionadoSuperior)
        return;
    colorBordeTabSelecionadoSuperior = newColorBordeTabSelecionadoSuperior;
    emit colorBordeTabSelecionadoSuperiorChanged();
}

QColor EstiloQss::getColorBordeTabPredeterminadoInferior() const
{
    return colorBordeTabPredeterminadoInferior;
}

void EstiloQss::setColorBordeTabPredeterminadoInferior(const QColor &newColorBordeTabPredeterminadoInferior)
{
    if (colorBordeTabPredeterminadoInferior == newColorBordeTabPredeterminadoInferior)
        return;
    colorBordeTabPredeterminadoInferior = newColorBordeTabPredeterminadoInferior;
    emit colorBordeTabPredeterminadoInferiorChanged();
}

QColor EstiloQss::getColorBordeTabHoverInferior() const
{
    return colorBordeTabHoverInferior;
}

void EstiloQss::setColorBordeTabHoverInferior(const QColor &newColorBordeTabHoverInferior)
{
    if (colorBordeTabHoverInferior == newColorBordeTabHoverInferior)
        return;
    colorBordeTabHoverInferior = newColorBordeTabHoverInferior;
    emit colorBordeTabHoverInferiorChanged();
}

QColor EstiloQss::getColorBordeTabPrecionadoInferior() const
{
    return colorBordeTabPrecionadoInferior;
}

void EstiloQss::setColorBordeTabPrecionadoInferior(const QColor &newColorBordeTabPrecionadoInferior)
{
    if (colorBordeTabPrecionadoInferior == newColorBordeTabPrecionadoInferior)
        return;
    colorBordeTabPrecionadoInferior = newColorBordeTabPrecionadoInferior;
    emit colorBordeTabPrecionadoInferiorChanged();
}

QColor EstiloQss::getColorBordeTabSelecionadoInferior() const
{
    return colorBordeTabSelecionadoInferior;
}

void EstiloQss::setColorBordeTabSelecionadoInferior(const QColor &newColorBordeTabSelecionadoInferior)
{
    if (colorBordeTabSelecionadoInferior == newColorBordeTabSelecionadoInferior)
        return;
    colorBordeTabSelecionadoInferior = newColorBordeTabSelecionadoInferior;
    emit colorBordeTabSelecionadoInferiorChanged();
}

QColor EstiloQss::getColorBordeTabPredeterminadoIzquierdo() const
{
    return colorBordeTabPredeterminadoIzquierdo;
}

void EstiloQss::setColorBordeTabPredeterminadoIzquierdo(const QColor &newColorBordeTabPredeterminadoIzquierdo)
{
    if (colorBordeTabPredeterminadoIzquierdo == newColorBordeTabPredeterminadoIzquierdo)
        return;
    colorBordeTabPredeterminadoIzquierdo = newColorBordeTabPredeterminadoIzquierdo;
    emit colorBordeTabPredeterminadoIzquierdoChanged();
}

QColor EstiloQss::getColorBordeTabHoverIzquierdo() const
{
    return colorBordeTabHoverIzquierdo;
}

void EstiloQss::setColorBordeTabHoverIzquierdo(const QColor &newColorBordeTabHoverIzquierdo)
{
    if (colorBordeTabHoverIzquierdo == newColorBordeTabHoverIzquierdo)
        return;
    colorBordeTabHoverIzquierdo = newColorBordeTabHoverIzquierdo;
    emit colorBordeTabHoverIzquierdoChanged();
}

QColor EstiloQss::getColorBordeTabPrecionadoIzquierdo() const
{
    return colorBordeTabPrecionadoIzquierdo;
}

void EstiloQss::setColorBordeTabPrecionadoIzquierdo(const QColor &newColorBordeTabPrecionadoIzquierdo)
{
    if (colorBordeTabPrecionadoIzquierdo == newColorBordeTabPrecionadoIzquierdo)
        return;
    colorBordeTabPrecionadoIzquierdo = newColorBordeTabPrecionadoIzquierdo;
    emit colorBordeTabPrecionadoIzquierdoChanged();
}

QColor EstiloQss::getColorBordeTabSelecionadoIzquierdo() const
{
    return colorBordeTabSelecionadoIzquierdo;
}

void EstiloQss::setColorBordeTabSelecionadoIzquierdo(const QColor &newColorBordeTabSelecionadoIzquierdo)
{
    if (colorBordeTabSelecionadoIzquierdo == newColorBordeTabSelecionadoIzquierdo)
        return;
    colorBordeTabSelecionadoIzquierdo = newColorBordeTabSelecionadoIzquierdo;
    emit colorBordeTabSelecionadoIzquierdoChanged();
}

QColor EstiloQss::getColorBordeTabPredeterminadoDerecho() const
{
    return colorBordeTabPredeterminadoDerecho;
}

void EstiloQss::setColorBordeTabPredeterminadoDerecho(const QColor &newColorBordeTabPredeterminadoDerecho)
{
    if (colorBordeTabPredeterminadoDerecho == newColorBordeTabPredeterminadoDerecho)
        return;
    colorBordeTabPredeterminadoDerecho = newColorBordeTabPredeterminadoDerecho;
    emit colorBordeTabPredeterminadoDerechoChanged();
}

QColor EstiloQss::getColorBordeTabHoverDerecho() const
{
    return colorBordeTabHoverDerecho;
}

void EstiloQss::setColorBordeTabHoverDerecho(const QColor &newColorBordeTabHoverDerecho)
{
    if (colorBordeTabHoverDerecho == newColorBordeTabHoverDerecho)
        return;
    colorBordeTabHoverDerecho = newColorBordeTabHoverDerecho;
    emit colorBordeTabHoverDerechoChanged();
}

QColor EstiloQss::getColorBordeTabPrecionadoDerecho() const
{
    return colorBordeTabPrecionadoDerecho;
}

void EstiloQss::setColorBordeTabPrecionadoDerecho(const QColor &newColorBordeTabPrecionadoDerecho)
{
    if (colorBordeTabPrecionadoDerecho == newColorBordeTabPrecionadoDerecho)
        return;
    colorBordeTabPrecionadoDerecho = newColorBordeTabPrecionadoDerecho;
    emit colorBordeTabPrecionadoDerechoChanged();
}

QColor EstiloQss::getColorBordeTabSelecionadoDerecho() const
{
    return colorBordeTabSelecionadoDerecho;
}

void EstiloQss::setColorBordeTabSelecionadoDerecho(const QColor &newColorBordeTabSelecionadoDerecho)
{
    if (colorBordeTabSelecionadoDerecho == newColorBordeTabSelecionadoDerecho)
        return;
    colorBordeTabSelecionadoDerecho = newColorBordeTabSelecionadoDerecho;
    emit colorBordeTabSelecionadoDerechoChanged();
}

int EstiloQss::getBordeSuperiorPredeterminado() const
{
    return bordeSuperiorPredeterminado;
}

void EstiloQss::setBordeSuperiorPredeterminado(int newBordeSuperiorPredeterminado)
{
    if (bordeSuperiorPredeterminado == newBordeSuperiorPredeterminado)
        return;
    bordeSuperiorPredeterminado = newBordeSuperiorPredeterminado;
    emit bordeSuperiorPredeterminadoChanged();
}

int EstiloQss::getBordeInferiorPredeterminado() const
{
    return bordeInferiorPredeterminado;
}

void EstiloQss::setBordeInferiorPredeterminado(int newBordeInferiorPredeterminado)
{
    if (bordeInferiorPredeterminado == newBordeInferiorPredeterminado)
        return;
    bordeInferiorPredeterminado = newBordeInferiorPredeterminado;
    emit bordeInferiorPredeterminadoChanged();
}

int EstiloQss::getBordeIzquierdaPredeterminado() const
{
    return bordeIzquierdaPredeterminado;
}

void EstiloQss::setBordeIzquierdaPredeterminado(int newBordeIzquierdaPredeterminado)
{
    if (bordeIzquierdaPredeterminado == newBordeIzquierdaPredeterminado)
        return;
    bordeIzquierdaPredeterminado = newBordeIzquierdaPredeterminado;
    emit bordeIzquierdaPredeterminadoChanged();
}

int EstiloQss::getBordeDerechoPredeterminado() const
{
    return bordeDerechoPredeterminado;
}

void EstiloQss::setBordeDerechoPredeterminado(int newBordeDerechoPredeterminado)
{
    if (bordeDerechoPredeterminado == newBordeDerechoPredeterminado)
        return;
    bordeDerechoPredeterminado = newBordeDerechoPredeterminado;
    emit bordeDerechoPredeterminadoChanged();
}

int EstiloQss::getBordeSuperiorHover() const
{
    return bordeSuperiorHover;
}

void EstiloQss::setBordeSuperiorHover(int newBordeSuperiorHover)
{
    if (bordeSuperiorHover == newBordeSuperiorHover)
        return;
    bordeSuperiorHover = newBordeSuperiorHover;
    emit bordeSuperiorHoverChanged();
}

int EstiloQss::getBordeInferiorHover() const
{
    return bordeInferiorHover;
}

void EstiloQss::setBordeInferiorHover(int newBordeInferiorHover)
{
    if (bordeInferiorHover == newBordeInferiorHover)
        return;
    bordeInferiorHover = newBordeInferiorHover;
    emit bordeInferiorHoverChanged();
}

int EstiloQss::getBordeIzquierdaHover() const
{
    return bordeIzquierdaHover;
}

void EstiloQss::setBordeIzquierdaHover(int newBordeIzquierdaHover)
{
    if (bordeIzquierdaHover == newBordeIzquierdaHover)
        return;
    bordeIzquierdaHover = newBordeIzquierdaHover;
    emit bordeIzquierdaHoverChanged();
}

int EstiloQss::getBordeDerechoHover() const
{
    return bordeDerechoHover;
}

void EstiloQss::setBordeDerechoHover(int newBordeDerechoHover)
{
    if (bordeDerechoHover == newBordeDerechoHover)
        return;
    bordeDerechoHover = newBordeDerechoHover;
    emit bordeDerechoHoverChanged();
}

int EstiloQss::getBordeSuperiorPresionado() const
{
    return bordeSuperiorPresionado;
}

void EstiloQss::setBordeSuperiorPresionado(int newBordeSuperiorPresionado)
{
    if (bordeSuperiorPresionado == newBordeSuperiorPresionado)
        return;
    bordeSuperiorPresionado = newBordeSuperiorPresionado;
    emit bordeSuperiorPresionadoChanged();
}

int EstiloQss::getBordeInferiorPresionado() const
{
    return bordeInferiorPresionado;
}

void EstiloQss::setBordeInferiorPresionado(int newBordeInferiorPresionado)
{
    if (bordeInferiorPresionado == newBordeInferiorPresionado)
        return;
    bordeInferiorPresionado = newBordeInferiorPresionado;
    emit bordeInferiorPresionadoChanged();
}

int EstiloQss::getBordeIzquierdaPresionado() const
{
    return bordeIzquierdaPresionado;
}

void EstiloQss::setBordeIzquierdaPresionado(int newBordeIzquierdaPresionado)
{
    if (bordeIzquierdaPresionado == newBordeIzquierdaPresionado)
        return;
    bordeIzquierdaPresionado = newBordeIzquierdaPresionado;
    emit bordeIzquierdaPresionadoChanged();
}

int EstiloQss::getBordeDerechoPresionado() const
{
    return bordeDerechoPresionado;
}

void EstiloQss::setBordeDerechoPresionado(int newBordeDerechoPresionado)
{
    if (bordeDerechoPresionado == newBordeDerechoPresionado)
        return;
    bordeDerechoPresionado = newBordeDerechoPresionado;
    emit bordeDerechoPresionadoChanged();
}

int EstiloQss::getBordeSuperiorSelecionado() const
{
    return bordeSuperiorSelecionado;
}

void EstiloQss::setBordeSuperiorSelecionado(int newBordeSuperiorSelecionado)
{
    if (bordeSuperiorSelecionado == newBordeSuperiorSelecionado)
        return;
    bordeSuperiorSelecionado = newBordeSuperiorSelecionado;
    emit bordeSuperiorSelecionadoChanged();
}

int EstiloQss::getBordeInferiorSelecionado() const
{
    return bordeInferiorSelecionado;
}

void EstiloQss::setBordeInferiorSelecionado(int newBordeInferiorSelecionado)
{
    if (bordeInferiorSelecionado == newBordeInferiorSelecionado)
        return;
    bordeInferiorSelecionado = newBordeInferiorSelecionado;
    emit bordeInferiorSelecionadoChanged();
}

int EstiloQss::getBordeIzquierdaSelecionado() const
{
    return bordeIzquierdaSelecionado;
}

void EstiloQss::setBordeIzquierdaSelecionado(int newBordeIzquierdaSelecionado)
{
    if (bordeIzquierdaSelecionado == newBordeIzquierdaSelecionado)
        return;
    bordeIzquierdaSelecionado = newBordeIzquierdaSelecionado;
    emit bordeIzquierdaSelecionadoChanged();
}

int EstiloQss::getBordeDerechoSelecionado() const
{
    return bordeDerechoSelecionado;
}

void EstiloQss::setBordeDerechoSelecionado(int newBordeDerechoSelecionado)
{
    if (bordeDerechoSelecionado == newBordeDerechoSelecionado)
        return;
    bordeDerechoSelecionado = newBordeDerechoSelecionado;
    emit bordeDerechoSelecionadoChanged();
}
