#ifndef TABWIDGETCUSTOM_H
#define TABWIDGETCUSTOM_H

#include <QTabWidget>
#include "TabBar/customtabbar.h"
#include "TabBar/SistemaDeDibujoTexto.h"
#include "TabBar/SistemaDeEstiloPestanas.h"
#include "TabBar/SistemaDeScrool.h"
#include "TabBar/estiloqss.h"

class TabWidgetCustom : public QTabWidget
{
    Q_OBJECT

    Q_PROPERTY(QSize areaDePestanas READ getAreaDePestanas WRITE setAreaDePestanas NOTIFY areaDePestanasChanged FINAL)
    Q_PROPERTY(int separacionEntrePestana READ getSeparacionEntrePestana WRITE setSeparacionEntrePestana NOTIFY separacionEntrePestanaChanged FINAL)
    Q_PROPERTY(int MargenDeTextoDerecha READ getMargenDeTextoDerecha WRITE setMargenDeTextoDerecha NOTIFY MargenDeTextoDerechaChanged FINAL)
    Q_PROPERTY(QColor colorTexto READ getColorTexto WRITE setColorTexto NOTIFY colorTextoChanged FINAL)
    Q_PROPERTY(bool cambiarColorTexto READ getCambiarColorTexto WRITE setCambiarColorTexto NOTIFY cambiarColorTextoChanged FINAL)
    Q_PROPERTY(QColor ColorFondo READ getColorFondo WRITE setColorFondo NOTIFY ColorFondoChanged FINAL)
    Q_PROPERTY(bool cambiarColorFondo READ getCambiarColorFondo WRITE setCambiarColorFondo NOTIFY cambiarColorFondoChanged FINAL)
    Q_PROPERTY(int sencibilidad READ getSencibilidad WRITE setSencibilidad NOTIFY sencibilidadChanged FINAL)

    Q_PROPERTY(bool activacionCustomEstiloQss READ getActivacionCustomEstiloQss WRITE setActivacionCustomEstiloQss NOTIFY activacionCustomEstiloQssChanged FINAL)
    Q_PROPERTY(QFont FondDeLetra READ getFondDeLetra WRITE setFondDeLetra NOTIFY FondDeLetraChanged FINAL)
    Q_PROPERTY(QColor fondoTabPredeterminado READ getFondoTabPredeterminado WRITE setFondoTabPredeterminado NOTIFY fondoTabPredeterminadoChanged FINAL)
    Q_PROPERTY(QColor fondoTabHover READ getFondoTabHover WRITE setFondoTabHover NOTIFY fondoTabHoverChanged FINAL)
    Q_PROPERTY(QColor fondoTabPrecionado READ getFondoTabPrecionado WRITE setFondoTabPrecionado NOTIFY fondoTabPrecionadoChanged FINAL)
    Q_PROPERTY(QColor fondoTabSelecionado READ getFondoTabSelecionado WRITE setFondoTabSelecionado NOTIFY fondoTabSelecionadoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabPredeterminado READ getColorBordeTabPredeterminado WRITE setColorBordeTabPredeterminado NOTIFY colorBordeTabPredeterminadoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabHover READ getColorBordeTabHover WRITE setColorBordeTabHover NOTIFY colorBordeTabHoverChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabPrecionado READ getColorBordeTabPrecionado WRITE setColorBordeTabPrecionado NOTIFY colorBordeTabPrecionadoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabSelecionado READ getColorBordeTabSelecionado WRITE setColorBordeTabSelecionado NOTIFY colorBordeTabSelecionadoChanged FINAL)
    Q_PROPERTY(int radioIzquierdoArriba READ getRadioIzquierdoArriba WRITE setRadioIzquierdoArriba NOTIFY radioIzquierdoArribaChanged FINAL)
    Q_PROPERTY(int radioIzquierdoAbajo READ getRadioIzquierdoAbajo WRITE setRadioIzquierdoAbajo NOTIFY radioIzquierdoAbajoChanged FINAL)
    Q_PROPERTY(int radioDerechoArriba READ getRadioDerechoArriba WRITE setRadioDerechoArriba NOTIFY radioDerechoArribaChanged FINAL)
    Q_PROPERTY(int radioDerechoAbajo READ getRadioDerechoAbajo WRITE setRadioDerechoAbajo NOTIFY radioDerechoAbajoChanged FINAL)

public:
    explicit TabWidgetCustom(QWidget *parent = nullptr);


    QSize getAreaDePestanas() const;
    void setAreaDePestanas(const QSize &newAreaDePestanas);

    int getSeparacionEntrePestana() const;
    void setSeparacionEntrePestana(int newSeparacionEntrePestana);

    int getMargenDeTextoDerecha() const;
    void setMargenDeTextoDerecha(int newMargenDeTextoDerecha);

    QColor getColorTexto() const;
    void setColorTexto(const QColor &newColorTexto);

    bool getCambiarColorTexto() const;
    void setCambiarColorTexto(bool newCambiarColorTexto);

    QColor getColorFondo() const;
    void setColorFondo(const QColor &newColorFondo);

    bool getCambiarColorFondo() const;
    void setCambiarColorFondo(bool newCambiarColorFondo);

    int getSencibilidad() const;
    void setSencibilidad(int newSencibilidad);

    QFont getFondDeLetra() const;
    void setFondDeLetra(const QFont &newFondDeLetra);

    QColor getFondoTabPredeterminado() const;
    void setFondoTabPredeterminado(const QColor &newFondoTabPredeterminado);

    QColor getFondoTabHover() const;
    void setFondoTabHover(const QColor &newFondoTabHover);

    QColor getFondoTabPrecionado() const;
    void setFondoTabPrecionado(const QColor &newFondoTabPrecionado);

    QColor getFondoTabSelecionado() const;
    void setFondoTabSelecionado(const QColor &newFondoTabSelecionado);

    QColor getColorBordeTabPredeterminado() const;
    void setColorBordeTabPredeterminado(const QColor &newColorBordeTabPredeterminado);

    QColor getColorBordeTabHover() const;
    void setColorBordeTabHover(const QColor &newColorBordeTabHover);

    QColor getColorBordeTabPrecionado() const;
    void setColorBordeTabPrecionado(const QColor &newColorBordeTabPrecionado);

    QColor getColorBordeTabSelecionado() const;
    void setColorBordeTabSelecionado(const QColor &newColorBordeTabSelecionado);

    int getRadioIzquierdoArriba() const;
    void setRadioIzquierdoArriba(int newRadioIzquierdoArriba);

    int getRadioIzquierdoAbajo() const;
    void setRadioIzquierdoAbajo(int newRadioIzquierdoAbajo);

    int getRadioDerechoArriba() const;
    void setRadioDerechoArriba(int newRadioDerechoArriba);

    int getRadioDerechoAbajo() const;
    void setRadioDerechoAbajo(int newRadioDerechoAbajo);



    bool getActivacionCustomEstiloQss() const;
    void setActivacionCustomEstiloQss(bool newActivacionCustomEstiloQss);

signals:
    void areaDePestanasChanged();
    void separacionEntrePestanaChanged();
    void MargenDeTextoDerechaChanged();
    void colorTextoChanged();
    void cambiarColorTextoChanged();
    void ColorFondoChanged();
    void cambiarColorFondoChanged();
    void sencibilidadChanged();
    void estiloDePestanasChanged();
    void FondDeLetraChanged();
    void fondoTabPredeterminadoChanged();
    void fondoTabHoverChanged();
    void fondoTabPrecionadoChanged();
    void fondoTabSelecionadoChanged();
    void colorBordeTabPredeterminadoChanged();
    void colorBordeTabHoverChanged();
    void colorBordeTabPrecionadoChanged();
    void colorBordeTabSelecionadoChanged();
    void radioIzquierdoArribaChanged();
    void radioIzquierdoAbajoChanged();
    void radioDerechoArribaChanged();
    void radioDerechoAbajoChanged();

    void activacionCustomEstiloQssChanged();

private:
    CustomTabBar *tabBar = new CustomTabBar(this);
    SistemaDeDibujoTexto* sistemaDeDibujosTexto = tabBar->sistemaDeDibujaTexto;
    SistemaDeEstiloPestanas *sistemaDeEstiloPestanas = tabBar->sistemaDeEstiloPestanas;
    SistemaDeUbicacionPestanas *sistemaDeUbicacionPestanas = tabBar->sistemaDeUbicacionPestana;
    SistemaDeScrool *sistemaDeScrool = tabBar->sistemasDeScrool;

    EstiloQss* estiloQss = new EstiloQss(this);

    //--------------------------------------tabUbicacion-------------------------------//
    QSize areaDePestanas = sistemaDeUbicacionPestanas->getAreaDeLaPestana();
    int separacionEntrePestana = sistemaDeUbicacionPestanas->getSeparacionPestana();
    //-------------------------------------tabText------------------------------------//

    int MargenDeTextoDerecha = sistemaDeDibujosTexto->getMargenDerechoTextoDerecho();

    QColor colorTexto = sistemaDeDibujosTexto->getColorTextoCambiar();
    bool cambiarColorTexto = sistemaDeDibujosTexto->getCambiarColorTexto();

    //-------------------------------------tabEstilo------------------------------------//

    QColor ColorFondo = sistemaDeEstiloPestanas->getColorFondoCambiar();
    bool cambiarColorFondo = sistemaDeEstiloPestanas->getCambiarColor();

    //-------------------------------------tabSistemaDeScrool------------------------------------//

    int sencibilidad = sistemaDeScrool->getSensibilidad();

    //-------------------------------------tabSistemaDeEstiloQssPestanas------------------------//

    bool activacionCustomEstiloQss = estiloQss->getActivacionCustom();
    //Qfont

    QFont FondDeLetra = estiloQss->getFondDeLetra();

    //fondo e tabBar

    QColor fondoTabPredeterminado = estiloQss->getFondoTabPredeterminado();
    QColor fondoTabHover = estiloQss->getFondoTabHover();
    QColor fondoTabPrecionado = estiloQss->getFondoTabPrecionado();
    QColor fondoTabSelecionado = estiloQss->getFondoTabSelecionado();

    //color Borde

    QColor colorBordeTabPredeterminado = estiloQss->getColorBordeTabPredeterminado();
    QColor colorBordeTabHover = estiloQss->getColorBordeTabHover();
    QColor colorBordeTabPrecionado = estiloQss->getColorBordeTabPrecionado();
    QColor colorBordeTabSelecionado = estiloQss->getColorBordeTabSelecionado();

    //Radios de LosBrodes

    int radioIzquierdoArriba = estiloQss->getRadioIzquierdoArriba();
    int radioIzquierdoAbajo = estiloQss->getRadioIzquierdoAbajo();
    int radioDerechoArriba = estiloQss->getRadioDerechoArriba();
    int radioDerechoAbajo = estiloQss->getRadioDerechoAbajo();


};

#endif // TABWIDGETCUSTOM_H
