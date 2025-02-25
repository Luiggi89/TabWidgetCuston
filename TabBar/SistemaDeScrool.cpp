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
    sensibilidad = newSensibilidad;
    emit sensibilidadChanged();
}

void SistemaDeScrool::sistemaDeScrollDeLTabBar(int velocidadDelScrol, int tabWidthX, int AnchoXPadre)
{
    if (AnchoXPadre < tabWidthX) {
        int anchoAreaDeLaPestanaVisible = AnchoXPadre ;
        int AnchoTotalDelContenedorDeLaPestana = tabWidthX;
        int movilidad = movilidadDeScroll;
        // Ajustar el offset: aumentar o disminuir según el scroll
        movilidad -= velocidadDelScrol / sensibilidad; // Ajusta la sensibilidad

        int maxScroll =  anchoAreaDeLaPestanaVisible -AnchoTotalDelContenedorDeLaPestana;

        movilidadDeScroll = qBound(maxScroll, movilidad, 0);
    }
}
