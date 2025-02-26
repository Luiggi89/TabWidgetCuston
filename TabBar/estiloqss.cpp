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
    return "font:" + grosorDeLetra + tamanoDeletra + FamiliaDeLETRA + " ;";
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

QString EstiloQss::TabIndividual(QString complementario)
{
    return "QTabBar::tab { " + complementario + "};";
}

QString EstiloQss::TabIndividualHover(QString complementario)
{
    return "QTabBar::tab:hover { " + complementario + "};";
}

QString EstiloQss::TabIndividualPresione(QString complementario)
{
    return "QTabBar::tab:pressed{ " + complementario + " };";
}

QString EstiloQss::TabIndividualSelecionado(QString complementario)
{
    return "QTabBar::tab:selected {" + complementario + "};";
}

QString EstiloQss::TabInfomacionPredeterminado(QFont fondDeLETRA, QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo)
{
    return TabIndividual(estiloDeLetra(fondDeLETRA) +
                         fondoTabBar(fondo)+
                         colorBorde(colorBord)+
                         bordesRadiusIzquierdaArriba(radioIzquierdaArriba) +
                         bordesRadiusAbajoIzquierda(radioIzquierdaAbajo)+
                         bordesRadiusDerechaArriba(radioDerechaArriba) +
                         bordesRadiusAbajoDerecha(radioDerechaAbajo));
}

QString EstiloQss::TabInformacionHover(QFont fondDeLETRA, QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo)
{
    return TabIndividualHover(estiloDeLetra(fondDeLETRA)+
                              fondoTabBar(fondo)+
                              colorBorde(colorBord)+
                              bordesRadiusIzquierdaArriba(radioIzquierdaArriba) +
                              bordesRadiusAbajoIzquierda(radioIzquierdaAbajo)+
                              bordesRadiusDerechaArriba(radioDerechaArriba) +
                              bordesRadiusAbajoDerecha(radioDerechaAbajo));
}

QString EstiloQss::TabInformacionPresione(QFont fondDeLETRA, QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo)
{
    return TabIndividualPresione(estiloDeLetra(fondDeLETRA)+
                                 fondoTabBar(fondo)+
                                 colorBorde(colorBord)+
                                 bordesRadiusIzquierdaArriba(radioIzquierdaArriba) +
                                 bordesRadiusAbajoIzquierda(radioIzquierdaAbajo)+
                                 bordesRadiusDerechaArriba(radioDerechaArriba) +
                                 bordesRadiusAbajoDerecha(radioDerechaAbajo));
}

QString EstiloQss::tabInformacionSelecionado(QFont fondDeLETRA, QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo)
{
    return TabIndividualSelecionado(estiloDeLetra(fondDeLETRA) + fondoTabBar(fondo)+
                                    colorBorde(colorBord)+
                                    bordesRadiusIzquierdaArriba(radioIzquierdaArriba) +
                                    bordesRadiusAbajoIzquierda(radioIzquierdaAbajo)+
                                    bordesRadiusDerechaArriba(radioDerechaArriba) +
                                    bordesRadiusAbajoDerecha(radioDerechaAbajo));
}

void EstiloQss::atualizacionDeEstado(CustomTabBar *tabBar)
{
    if (!activacionCustom)
    {
        tabBar->setStyleSheet("");
    }else if (activacionCustom) {
        tabBar->setStyleSheet(TabInfomacionPredeterminado(FondDeLetra,fondoTabPredeterminado,colorBordeTabPredeterminado,radioIzquierdoArriba,radioIzquierdoAbajo, radioDerechoArriba,radioDerechoAbajo) +
                             TabInformacionHover(FondDeLetra,fondoTabHover,colorBordeTabHover,radioIzquierdoArriba,radioIzquierdoAbajo, radioDerechoArriba,radioDerechoAbajo) +
                             TabInformacionPresione(FondDeLetra,fondoTabPrecionado,colorBordeTabPrecionado,radioIzquierdoArriba,radioIzquierdoAbajo, radioDerechoArriba,radioDerechoAbajo)+
                             tabInformacionSelecionado(FondDeLetra,fondoTabSelecionado,colorBordeTabSelecionado,radioIzquierdoArriba,radioIzquierdoAbajo, radioDerechoArriba,radioDerechoAbajo));
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

QColor EstiloQss::getColorBordeTabPredeterminado() const
{
    return colorBordeTabPredeterminado;
}

void EstiloQss::setColorBordeTabPredeterminado(const QColor &newColorBordeTabPredeterminado)
{
    if (colorBordeTabPredeterminado == newColorBordeTabPredeterminado)
        return;
    colorBordeTabPredeterminado = newColorBordeTabPredeterminado;
    emit colorBordeTabPredeterminadoChanged();
}

QColor EstiloQss::getColorBordeTabHover() const
{
    return colorBordeTabHover;
}

void EstiloQss::setColorBordeTabHover(const QColor &newColorBordeTabHover)
{
    if (colorBordeTabHover == newColorBordeTabHover)
        return;
    colorBordeTabHover = newColorBordeTabHover;
    emit colorBordeTabHoverChanged();
}

QColor EstiloQss::getColorBordeTabSelecionado() const
{
    return colorBordeTabSelecionado;
}

void EstiloQss::setColorBordeTabSelecionado(const QColor &newColorBordeTabSelecionado)
{
    if (colorBordeTabSelecionado == newColorBordeTabSelecionado)
        return;
    colorBordeTabSelecionado = newColorBordeTabSelecionado;
    emit colorBordeTabSelecionadoChanged();
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

QColor EstiloQss::getColorBordeTabPrecionado() const
{
    return colorBordeTabPrecionado;
}

void EstiloQss::setColorBordeTabPrecionado(const QColor &newColorBordeTabPrecionado)
{
    if (colorBordeTabPrecionado == newColorBordeTabPrecionado)
        return;
    colorBordeTabPrecionado = newColorBordeTabPrecionado;
    emit colorBordeTabPrecionadoChanged();
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
