#include "SistemaDeScrool.h"

SistemaDeScrool::SistemaDeScrool(QObject *parent)
    : QObject{parent}
{}

int SistemaDeScrool::getMovilidadDeScroll() const
{
    return movilidadDeScroll;
}

void SistemaDeScrool::setMovilidadDeScroll(int newMovilidadDeScroll)
{
    if (movilidadDeScroll == newMovilidadDeScroll)
        return;
    movilidadDeScroll = newMovilidadDeScroll;
    emit movilidadDeScrollChanged();
}

int SistemaDeScrool::getSensibilidad() const
{
    return sensibilidad;
}

void SistemaDeScrool::setSensibilidad(int newSensibilidad)
{
    if (sensibilidad == newSensibilidad)
        return;
    sensibilidad = qBound(1, newSensibilidad, 20);
    emit sensibilidadChanged();
}

void SistemaDeScrool::sistemaDeScrollDeLTabBar(int velocidadDelScrol)
{
    movilidadDeScroll -= velocidadDelScrol / sensibilidad; // Ajusta la sensibilidad
}

void SistemaDeScrool::recalcularAnchoScrool(int tabWidthX, int AnchoXPadre)
{
    int anchoAreaDeLaPestanaVisible = AnchoXPadre ;
    int AnchoTotalDelContenedorDeLaPestana = tabWidthX;
    int movilidad = movilidadDeScroll;
    int maxScroll =  anchoAreaDeLaPestanaVisible - AnchoTotalDelContenedorDeLaPestana;
    if (maxScroll >= 0) {
        maxScroll= 0;
    }
    movilidadDeScroll = qBound(maxScroll, movilidad, 0);

}


