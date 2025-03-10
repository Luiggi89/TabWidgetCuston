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
    Q_PROPERTY(int aumentarLargoContenedor READ getAumentarLargoContenedor WRITE setAumentarLargoContenedor NOTIFY aumentarLargoContenedorChanged FINAL)
    Q_PROPERTY(int movimientoYDelasPestanas READ getMovimientoYDelasPestanas WRITE setMovimientoYDelasPestanas NOTIFY movimientoYDelasPestanasChanged FINAL)

    Q_PROPERTY(int MargenDeTextoDerecha READ getMargenDeTextoDerecha WRITE setMargenDeTextoDerecha NOTIFY MargenDeTextoDerechaChanged FINAL)
    Q_PROPERTY(QPoint PaddingTexto READ getPaddingTexto WRITE setPaddingTexto NOTIFY PaddingTextoChanged FINAL)
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

    QPoint getPaddingTexto() const;
    void setPaddingTexto(QPoint newPaddingTexto);

    int getAumentarLargoContenedor() const;
    void setAumentarLargoContenedor(int newAumentarLargoContenedor);

    int getMovimientoYDelasPestanas() const;
    void setMovimientoYDelasPestanas(int newMovimientoYDelasPestanas);

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

    void radioIzquierdoArribaChanged();
    void radioIzquierdoAbajoChanged();
    void radioDerechoArribaChanged();
    void radioDerechoAbajoChanged();

    void activacionCustomEstiloQssChanged();

    void PaddingTextoChanged();

    void aumentarLargoContenedorChanged();

    void movimientoYDelasPestanasChanged();

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

    int aumentarLargoContenedor = sistemaDeUbicacionPestanas->getAumentar_Largo_Y_Delcontenedor();
    int movimientoYDelasPestanas = sistemaDeUbicacionPestanas->getMovimientoYDelasPestanas();

    //-------------------------------------tabText------------------------------------//

    int MargenDeTextoDerecha = sistemaDeDibujosTexto->getMargenDerechoTextoDerecho();
    QPoint PaddingTexto = sistemaDeDibujosTexto->getPadingTexto();

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

    //color BordeSuperior

    QColor colorBordeTabPredeterminadoSuperior = estiloQss->getColorBordeTabHoverSuperior();
    QColor colorBordeTabHoverSuperior = estiloQss->getColorBordeTabHoverSuperior();
    QColor colorBordeTabPrecionadoSuperior = estiloQss->getColorBordeTabPrecionadoSuperior();
    QColor colorBordeTabSelecionadoSuperior = estiloQss->getColorBordeTabSelecionadoSuperior();

    //color BordeInferior

    QColor colorBordeTabPredeterminadoInferior = estiloQss->getColorBordeTabPrecionadoInferior();
    QColor colorBordeTabHoverInferior = estiloQss->getColorBordeTabPrecionadoInferior();
    QColor colorBordeTabPrecionadoInferior = estiloQss->getColorBordeTabPrecionadoInferior();
    QColor colorBordeTabSelecionadoInferior = estiloQss->getColorBordeTabSelecionadoInferior();

    //color izquierdo

    QColor colorBordeTabPredeterminadoIzquierdo;
    QColor colorBordeTabHoverIzquierdo;
    QColor colorBordeTabPrecionadoIzquierdo;
    QColor colorBordeTabSelecionadoIzquierdo;

    //color Derecho

    QColor colorBordeTabPredeterminadoDerecho;
    QColor colorBordeTabHoverDerecho;
    QColor colorBordeTabPrecionadoDerecho;
    QColor colorBordeTabSelecionadoDerecho;

    //Grosor de los bordes predeterminado

    int bordeSuperiorPredeterminado = 1;
    int bordeInferiorPredeterminado = 1;
    int bordeIzquierdaPredeterminado = 1;
    int bordeDerechoPredeterminado = 1;

    //Grosor de los bordes hover

    int bordeSuperiorHover = 1;
    int bordeInferiorHover = 1;
    int bordeIzquierdaHover = 1;
    int bordeDerechoHover = 1;

    //Grosor de los bordes precionado

    int bordeSuperiorPresionado = 1;
    int bordeInferiorPresionado = 1;
    int bordeIzquierdaPresionado = 1;
    int bordeDerechoPresionado = 1;

    //Grosor de los bordes selecionado

    int bordeSuperiorSelecionado = 1;
    int bordeInferiorSelecionado = 1;
    int bordeIzquierdaSelecionado = 1;
    int bordeDerechoSelecionado = 1;


    //Radios de LosBrodes

    int radioIzquierdoArriba = estiloQss->getRadioIzquierdoArriba();
    int radioIzquierdoAbajo = estiloQss->getRadioIzquierdoAbajo();
    int radioDerechoArriba = estiloQss->getRadioDerechoArriba();
    int radioDerechoAbajo = estiloQss->getRadioDerechoAbajo();


};

#endif // TABWIDGETCUSTOM_H
