#include "SistemaDeUbicacionPestanas.h"

SistemaDeUbicacionPestanas::SistemaDeUbicacionPestanas(QObject *parent)
    : QObject{parent}
{}

int SistemaDeUbicacionPestanas::getSeparacionPestana() const
{
    return separacionPestana;
}

void SistemaDeUbicacionPestanas::setSeparacionPestana(int newSeparacionPestana)
{
    if (separacionPestana == newSeparacionPestana)
        return;
    separacionPestana = newSeparacionPestana;
    emit separacionPestanaChanged();
}

QSize SistemaDeUbicacionPestanas::getAreaDeLaPestana() const
{
    return AreaDeLaPestana;
}

void SistemaDeUbicacionPestanas::setAreaDeLaPestana(const QSize &newAreaDeLaPestana)
{
    if (AreaDeLaPestana == newAreaDeLaPestana)
        return;
    AreaDeLaPestana = newAreaDeLaPestana;
    emit AreaDeLaPestanaChanged();
}

QVector<int> SistemaDeUbicacionPestanas::getAnchoIndividualPestanasX() const
{
    return anchoIndividualPestanasX;
}

void SistemaDeUbicacionPestanas::setAnchoIndividualPestanasX(const QVector<int> &newAnchoIndividualPestanasX)
{
    if (anchoIndividualPestanasX == newAnchoIndividualPestanasX)
        return;
    anchoIndividualPestanasX = newAnchoIndividualPestanasX;
    emit anchoIndividualPestanasXChanged();
}

void SistemaDeUbicacionPestanas::setIndividualAnchoIndividualPestanasX(const int &newAnchoIndividualPestanasX, int index)
{
    anchoIndividualPestanasX[index] = newAnchoIndividualPestanasX;
    emit separacionPestanaChanged();
}

QVector<int> SistemaDeUbicacionPestanas::getMargenesEntrePestanasX() const
{
    return margenesEntrePestanasX;
}

void SistemaDeUbicacionPestanas::setMargenesEntrePestanasX(const QVector<int> &newMargenesEntrePestanasX)
{
    if (margenesEntrePestanasX == newMargenesEntrePestanasX)
        return;
    margenesEntrePestanasX = newMargenesEntrePestanasX;
    emit margenesEntrePestanasXChanged();
}

void SistemaDeUbicacionPestanas::setIndividualMargenesEntrePestanasX(const int &newAnchoIndividualPestanasX, int index)
{
    margenesEntrePestanasX[index] = newAnchoIndividualPestanasX;
    emit separacionPestanaChanged();
}

QVector<int> SistemaDeUbicacionPestanas::getPositionPestanasIndividual_X() const
{
    return positionPestanasIndividual_X;
}

void SistemaDeUbicacionPestanas::setPositionPestanasIndividual_X(const QVector<int> &newPositionPestanasIndividual_X)
{
    if (positionPestanasIndividual_X == newPositionPestanasIndividual_X)
        return;
    positionPestanasIndividual_X = newPositionPestanasIndividual_X;
    emit positionPestanasIndividual_XChanged();
}

void SistemaDeUbicacionPestanas::setIndividuaPositionPestanasIndividual_X(const int &newPestanasIndividual_X, int index)
{
    positionPestanasIndividual_X[index] = newPestanasIndividual_X;
    emit separacionPestanaChanged();
}

QVector<QRect> SistemaDeUbicacionPestanas::getHitBOx_DE_La_SeparacionDePestanas() const
{
    return HitBOx_DE_La_SeparacionDePestanas;
}

void SistemaDeUbicacionPestanas::setHitBOx_DE_La_SeparacionDePestanas(const QVector<QRect> &newHitBOx_DE_La_SeparacionDePestanas)
{
    if (HitBOx_DE_La_SeparacionDePestanas == newHitBOx_DE_La_SeparacionDePestanas)
        return;
    HitBOx_DE_La_SeparacionDePestanas = newHitBOx_DE_La_SeparacionDePestanas;
    emit HitBOx_DE_La_SeparacionDePestanasChanged();
}

void SistemaDeUbicacionPestanas::setIndividualHitBOx_DE_La_SeparacionDePestanas(const QRect &newHitBOx_DE_La_SeparacionDePestanas, int index)
{
    HitBOx_DE_La_SeparacionDePestanas[index] = newHitBOx_DE_La_SeparacionDePestanas;
    emit separacionPestanaChanged();
}

QVector<QRect> SistemaDeUbicacionPestanas::getHitBOx_DE_La_Pestanas() const
{
    return HitBOx_DE_La_Pestanas;
}

void SistemaDeUbicacionPestanas::setHitBOx_DE_La_Pestanas(const QVector<QRect> &newHitBOx_DE_La_Pestanas)
{
    if (HitBOx_DE_La_Pestanas == newHitBOx_DE_La_Pestanas)
        return;
    HitBOx_DE_La_Pestanas = newHitBOx_DE_La_Pestanas;
    emit HitBOx_DE_La_PestanasChanged();
}

void SistemaDeUbicacionPestanas::setIndividualHitBOx_DE_La_Pestanas(const QRect &newHitBOx_DE_La_Pestanas, int index)
{
    HitBOx_DE_La_Pestanas[index] = newHitBOx_DE_La_Pestanas;
    emit separacionPestanaChanged();
}

void SistemaDeUbicacionPestanas::actulizarListaInforPestanas(int index, int count, int TabSizeHintX, int movilidadScroll, int anchoDelContenedor) const
{
    int calculatePositionPestanas = (aumentar_Largo_Y_Delcontenedor/2)+movimientoYDelasPestanas;
    //actualiza los valores de la lista para las posiciones
    if (index == count -1) {
        margenesEntrePestanasX[index] = 0;
    }else
    {
        margenesEntrePestanasX[index] = separacionPestana;
    }

    anchoIndividualPestanasX[index] = TabSizeHintX;
    if (index == 0) {
        positionPestanasIndividual_X[index] = 0 + movilidadScroll;

    }
    if (index < count) {
        positionPestanasIndividual_X[index + 1] =
            positionPestanasIndividual_X[index] +
            margenesEntrePestanasX[index] +
            anchoIndividualPestanasX[index];
    }
    HitBOx_DE_La_SeparacionDePestanas[index] = QRect(positionPestanasIndividual_X[index] + anchoIndividualPestanasX[index],calculatePositionPestanas, margenesEntrePestanasX[index],AreaDeLaPestana.height());
    HitBOx_DE_La_Pestanas [index] = QRect(positionPestanasIndividual_X[index],calculatePositionPestanas, anchoIndividualPestanasX[index], AreaDeLaPestana.height());

}

void SistemaDeUbicacionPestanas::InsertarInformacionPestanas(int index, int count, int TabSizeHintX, int movilidadScroll, int anchoDelContenedor)
{
    int amortiguador = 1;
    int SumaIndiceMasAmortiguador = count + amortiguador;
    int calculatePositionPestanas = (aumentar_Largo_Y_Delcontenedor/2)+movimientoYDelasPestanas;

    for (int var = margenesEntrePestanasX.count(); var < SumaIndiceMasAmortiguador; ++var) {

        margenesEntrePestanasX.push_back(separacionPestana);
        anchoIndividualPestanasX.push_back(TabSizeHintX);

        if (index == 0) {
            positionPestanasIndividual_X.push_back(0 + movilidadScroll);
        }else{
            positionPestanasIndividual_X.push_back(positionPestanasIndividual_X[index-1] +
                                                   anchoIndividualPestanasX[index] +
                                                   margenesEntrePestanasX[index]);
        }

        HitBOx_DE_La_SeparacionDePestanas.push_back(QRect(positionPestanasIndividual_X[index] + anchoIndividualPestanasX[index],calculatePositionPestanas, margenesEntrePestanasX[index],AreaDeLaPestana.height()));
        HitBOx_DE_La_Pestanas.push_back(QRect(positionPestanasIndividual_X[index],0, anchoIndividualPestanasX[index], anchoDelContenedor));
    }
}

void SistemaDeUbicacionPestanas::EliminarInformacionPestana(int index)
{
    if (index > 1) {
        margenesEntrePestanasX.erase(std::find(margenesEntrePestanasX.begin(), margenesEntrePestanasX.end(), margenesEntrePestanasX[index]));
        anchoIndividualPestanasX.erase(std::find(anchoIndividualPestanasX.begin(), anchoIndividualPestanasX.end(), anchoIndividualPestanasX[index]));
        positionPestanasIndividual_X.erase(std::find(positionPestanasIndividual_X.begin(), positionPestanasIndividual_X.end(), positionPestanasIndividual_X[index]));
        HitBOx_DE_La_SeparacionDePestanas.erase(std::find(HitBOx_DE_La_SeparacionDePestanas.begin(), HitBOx_DE_La_SeparacionDePestanas.end(), HitBOx_DE_La_SeparacionDePestanas[index]));
        HitBOx_DE_La_Pestanas.erase(std::find(HitBOx_DE_La_Pestanas.begin(), HitBOx_DE_La_Pestanas.end(), HitBOx_DE_La_Pestanas[index]));
    }
}

int SistemaDeUbicacionPestanas::quePestañasFueUbicado(QPoint point, int count)
{
    for (int i = 0; i < count; ++i) {
        // tabRect(i) devuelve el QRect correspondiente a la pestaña i
        if (HitBOx_DE_La_Pestanas[i].contains(point)) {
            return i;
        }
    }
    return -1;
}

int SistemaDeUbicacionPestanas::getAumentar_Largo_Y_Delcontenedor() const
{
    return aumentar_Largo_Y_Delcontenedor;
}

void SistemaDeUbicacionPestanas::setAumentar_Largo_Y_Delcontenedor(int newAumentar_Largo_Y_Delcontenedor)
{
    if (aumentar_Largo_Y_Delcontenedor == newAumentar_Largo_Y_Delcontenedor)
        return;
    aumentar_Largo_Y_Delcontenedor = newAumentar_Largo_Y_Delcontenedor;
    emit aumentar_Largo_Y_DelcontenedorChanged();
}

int SistemaDeUbicacionPestanas::getMovimientoYDelasPestanas() const
{
    return movimientoYDelasPestanas;
}

void SistemaDeUbicacionPestanas::setMovimientoYDelasPestanas(int newMovimientoYDelasPestanas)
{
    if (movimientoYDelasPestanas == newMovimientoYDelasPestanas)
        return;
    movimientoYDelasPestanas = newMovimientoYDelasPestanas;
    emit movimientoYDelasPestanasChanged();
}
