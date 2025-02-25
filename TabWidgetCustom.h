#ifndef TABWIDGETCUSTOM_H
#define TABWIDGETCUSTOM_H

#include <QTabWidget>
#include "TabBar/customtabbar.h"
#include "TabBar/SistemaDeDibujoTexto.h"
#include "TabBar/SistemaDeEstiloPestanas.h"
#include "TabBar/SistemaDeScrool.h"

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

signals:
    void areaDePestanasChanged();
    void separacionEntrePestanaChanged();
    void MargenDeTextoDerechaChanged();
    void colorTextoChanged();
    void cambiarColorTextoChanged();
    void ColorFondoChanged();
    void cambiarColorFondoChanged();
    void sencibilidadChanged();
private:
    CustomTabBar *tabBar = new CustomTabBar(this);
    SistemaDeDibujoTexto* sistemaDeDibujosTexto = tabBar->sistemaDeDibujaTexto;
    SistemaDeEstiloPestanas *sistemaDeEstiloPestanas = tabBar->sistemaDeEstiloPestanas;
    SistemaDeUbicacionPestanas *sistemaDeUbicacionPestanas = tabBar->sistemaDeUbicacionPestana;
    SistemaDeScrool *sistemaDeScrool = tabBar->sistemasDeScrool;

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

};

#endif // TABWIDGETCUSTOM_H
