#include "estiloqss.h"

EstiloQss::EstiloQss(QObject *parent)
    : QObject{parent}
{}

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

QString EstiloQss::TabInfomacionPredeterminado(QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo)
{
    return TabIndividual(fondoTabBar(fondo)+
                         colorBorde(colorBord)+
                         bordesRadiusIzquierdaArriba(radioIzquierdaArriba) +
                         bordesRadiusAbajoIzquierda(radioIzquierdaAbajo)+
                         bordesRadiusDerechaArriba(radioDerechaArriba) +
                         bordesRadiusAbajoDerecha(radioDerechaAbajo));
}

QString EstiloQss::TabInformacionHover(QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo)
{
    return TabIndividualHover(fondoTabBar(fondo)+
                              colorBorde(colorBord)+
                              bordesRadiusIzquierdaArriba(radioIzquierdaArriba) +
                              bordesRadiusAbajoIzquierda(radioIzquierdaAbajo)+
                              bordesRadiusDerechaArriba(radioDerechaArriba) +
                              bordesRadiusAbajoDerecha(radioDerechaAbajo));
}

QString EstiloQss::TabInformacionPresione(QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo)
{
    return TabIndividualPresione(fondoTabBar(fondo)+
                                 colorBorde(colorBord)+
                                 bordesRadiusIzquierdaArriba(radioIzquierdaArriba) +
                                 bordesRadiusAbajoIzquierda(radioIzquierdaAbajo)+
                                 bordesRadiusDerechaArriba(radioDerechaArriba) +
                                 bordesRadiusAbajoDerecha(radioDerechaAbajo));
}

QString EstiloQss::tabInformacionSelecionado(QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo)
{
    return TabIndividualSelecionado(fondoTabBar(fondo)+
                                    colorBorde(colorBord)+
                                    bordesRadiusIzquierdaArriba(radioIzquierdaArriba) +
                                    bordesRadiusAbajoIzquierda(radioIzquierdaAbajo)+
                                    bordesRadiusDerechaArriba(radioDerechaArriba) +
                                    bordesRadiusAbajoDerecha(radioDerechaAbajo));
}
