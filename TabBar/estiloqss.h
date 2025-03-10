#ifndef ESTILOQSS_H
#define ESTILOQSS_H

#include <QObject>
#include <QColor>
#include <QFont>
#include "customtabbar.h"

class EstiloQss : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool activacionCustom READ getActivacionCustom WRITE setActivacionCustom NOTIFY activacionCustomChanged FINAL)

    Q_PROPERTY(QFont FondDeLetra READ getFondDeLetra WRITE setFondDeLetra NOTIFY FondDeLetraChanged FINAL)

    Q_PROPERTY(QColor fondoTabPredeterminado READ getFondoTabPredeterminado WRITE setFondoTabPredeterminado NOTIFY fondoTabPredeterminadoChanged FINAL)
    Q_PROPERTY(QColor fondoTabHover READ getFondoTabHover WRITE setFondoTabHover NOTIFY fondoTabHoverChanged FINAL)
    Q_PROPERTY(QColor fondoTabPrecionado READ getFondoTabPrecionado WRITE setFondoTabPrecionado NOTIFY fondoTabPrecionadoChanged FINAL)
    Q_PROPERTY(QColor fondoTabSelecionado READ getFondoTabSelecionado WRITE setFondoTabSelecionado NOTIFY fondoTabSelecionadoChanged FINAL)

    Q_PROPERTY(int radioIzquierdoArriba READ getRadioIzquierdoArriba WRITE setRadioIzquierdoArriba NOTIFY radioIzquierdoArribaChanged FINAL)
    Q_PROPERTY(int radioIzquierdoAbajo READ getRadioIzquierdoAbajo WRITE setRadioIzquierdoAbajo NOTIFY radioIzquierdoAbajoChanged FINAL)
    Q_PROPERTY(int radioDerechoArriba READ getRadioDerechoArriba WRITE setRadioDerechoArriba NOTIFY radioDerechoArribaChanged FINAL)
    Q_PROPERTY(int radioDerechoAbajo READ getRadioDerechoAbajo WRITE setRadioDerechoAbajo NOTIFY radioDerechoAbajoChanged FINAL)

    Q_PROPERTY(QColor colorBordeTabPredeterminadoSuperior READ getColorBordeTabPredeterminadoSuperior WRITE setColorBordeTabPredeterminadoSuperior NOTIFY colorBordeTabPredeterminadoSuperiorChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabHoverSuperior READ getColorBordeTabHoverSuperior WRITE setColorBordeTabHoverSuperior NOTIFY colorBordeTabHoverSuperiorChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabPrecionadoSuperior READ getColorBordeTabPrecionadoSuperior WRITE setColorBordeTabPrecionadoSuperior NOTIFY colorBordeTabPrecionadoSuperiorChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabSelecionadoSuperior READ getColorBordeTabSelecionadoSuperior WRITE setColorBordeTabSelecionadoSuperior NOTIFY colorBordeTabSelecionadoSuperiorChanged FINAL)

    Q_PROPERTY(QColor colorBordeTabPredeterminadoInferior READ getColorBordeTabPredeterminadoInferior WRITE setColorBordeTabPredeterminadoInferior NOTIFY colorBordeTabPredeterminadoInferiorChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabHoverInferior READ getColorBordeTabHoverInferior WRITE setColorBordeTabHoverInferior NOTIFY colorBordeTabHoverInferiorChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabPrecionadoInferior READ getColorBordeTabPrecionadoInferior WRITE setColorBordeTabPrecionadoInferior NOTIFY colorBordeTabPrecionadoInferiorChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabSelecionadoInferior READ getColorBordeTabSelecionadoInferior WRITE setColorBordeTabSelecionadoInferior NOTIFY colorBordeTabSelecionadoInferiorChanged FINAL)

    Q_PROPERTY(QColor colorBordeTabPredeterminadoIzquierdo READ getColorBordeTabPredeterminadoIzquierdo WRITE setColorBordeTabPredeterminadoIzquierdo NOTIFY colorBordeTabPredeterminadoIzquierdoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabHoverIzquierdo READ getColorBordeTabHoverIzquierdo WRITE setColorBordeTabHoverIzquierdo NOTIFY colorBordeTabHoverIzquierdoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabPrecionadoIzquierdo READ getColorBordeTabPrecionadoIzquierdo WRITE setColorBordeTabPrecionadoIzquierdo NOTIFY colorBordeTabPrecionadoIzquierdoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabSelecionadoIzquierdo READ getColorBordeTabSelecionadoIzquierdo WRITE setColorBordeTabSelecionadoIzquierdo NOTIFY colorBordeTabSelecionadoIzquierdoChanged FINAL)

    Q_PROPERTY(QColor colorBordeTabPredeterminadoDerecho READ getColorBordeTabPredeterminadoDerecho WRITE setColorBordeTabPredeterminadoDerecho NOTIFY colorBordeTabPredeterminadoDerechoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabHoverDerecho READ getColorBordeTabHoverDerecho WRITE setColorBordeTabHoverDerecho NOTIFY colorBordeTabHoverDerechoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabPrecionadoDerecho READ getColorBordeTabPrecionadoDerecho WRITE setColorBordeTabPrecionadoDerecho NOTIFY colorBordeTabPrecionadoDerechoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabSelecionadoDerecho READ getColorBordeTabSelecionadoDerecho WRITE setColorBordeTabSelecionadoDerecho NOTIFY colorBordeTabSelecionadoDerechoChanged FINAL)

    Q_PROPERTY(int bordeSuperiorPredeterminado READ getBordeSuperiorPredeterminado WRITE setBordeSuperiorPredeterminado NOTIFY bordeSuperiorPredeterminadoChanged FINAL)
    Q_PROPERTY(int bordeInferiorPredeterminado READ getBordeInferiorPredeterminado WRITE setBordeInferiorPredeterminado NOTIFY bordeInferiorPredeterminadoChanged FINAL)
    Q_PROPERTY(int bordeIzquierdaPredeterminado READ getBordeIzquierdaPredeterminado WRITE setBordeIzquierdaPredeterminado NOTIFY bordeIzquierdaPredeterminadoChanged FINAL)
    Q_PROPERTY(int bordeDerechoPredeterminado READ getBordeDerechoPredeterminado WRITE setBordeDerechoPredeterminado NOTIFY bordeDerechoPredeterminadoChanged FINAL)
    Q_PROPERTY(int bordeSuperiorHover READ getBordeSuperiorHover WRITE setBordeSuperiorHover NOTIFY bordeSuperiorHoverChanged FINAL)
    Q_PROPERTY(int bordeInferiorHover READ getBordeInferiorHover WRITE setBordeInferiorHover NOTIFY bordeInferiorHoverChanged FINAL)

    Q_PROPERTY(int bordeIzquierdaHover READ getBordeIzquierdaHover WRITE setBordeIzquierdaHover NOTIFY bordeIzquierdaHoverChanged FINAL)
    Q_PROPERTY(int bordeDerechoHover READ getBordeDerechoHover WRITE setBordeDerechoHover NOTIFY bordeDerechoHoverChanged FINAL)
    Q_PROPERTY(int bordeSuperiorPresionado READ getBordeSuperiorPresionado WRITE setBordeSuperiorPresionado NOTIFY bordeSuperiorPresionadoChanged FINAL)
    Q_PROPERTY(int bordeInferiorPresionado READ getBordeInferiorPresionado WRITE setBordeInferiorPresionado NOTIFY bordeInferiorPresionadoChanged FINAL)
    Q_PROPERTY(int bordeIzquierdaPresionado READ getBordeIzquierdaPresionado WRITE setBordeIzquierdaPresionado NOTIFY bordeIzquierdaPresionadoChanged FINAL)

    Q_PROPERTY(int bordeDerechoPresionado READ getBordeDerechoPresionado WRITE setBordeDerechoPresionado NOTIFY bordeDerechoPresionadoChanged FINAL)
    Q_PROPERTY(int bordeSuperiorSelecionado READ getBordeSuperiorSelecionado WRITE setBordeSuperiorSelecionado NOTIFY bordeSuperiorSelecionadoChanged FINAL)
    Q_PROPERTY(int bordeInferiorSelecionado READ getBordeInferiorSelecionado WRITE setBordeInferiorSelecionado NOTIFY bordeInferiorSelecionadoChanged FINAL)
    Q_PROPERTY(int bordeIzquierdaSelecionado READ getBordeIzquierdaSelecionado WRITE setBordeIzquierdaSelecionado NOTIFY bordeIzquierdaSelecionadoChanged FINAL)
    Q_PROPERTY(int bordeDerechoSelecionado READ getBordeDerechoSelecionado WRITE setBordeDerechoSelecionado NOTIFY bordeDerechoSelecionadoChanged FINAL)



public:

    explicit EstiloQss(QObject *parent = nullptr);

    QString estiloDeLetra (QFont letra);

    QString fondoTabBar(QColor fondo);
    QString colorBorde(QColor colorBorde);

    QString bordesRadiusIzquierdaArriba(int radioIzquierda);
    QString bordesRadiusAbajoIzquierda(int radioArribar);
    QString bordesRadiusDerechaArriba(int radioDerechas);
    QString bordesRadiusAbajoDerecha(int radioAbajo);

    QString bordesGrosorArriba(int grosor, QColor color);
    QString bordesGrosorIzquierda(int grosor, QColor color);
    QString bordesGrosorDerecha(int grosor, QColor color);
    QString bordesGrosorAbajo(int grosor, QColor color);

    QString TabIndividual(QString complementario);
    QString TabIndividualHover(QString complementario);
    QString TabIndividualPresione(QString complementario);
    QString TabIndividualSelecionado(QString complementario);

    QString TabInfomacionPredeterminado();
    QString TabInformacionHover();
    QString TabInformacionPresione();
    QString tabInformacionSelecionado();

private:

    bool activacionCustom = false;

    //Qfont

    QFont FondDeLetra;

    //fondo e tabBar
    QColor fondoTabPredeterminado;
    QColor fondoTabHover;
    QColor fondoTabPrecionado;
    QColor fondoTabSelecionado;

    //color BordeSuperior

    QColor colorBordeTabPredeterminadoSuperior;
    QColor colorBordeTabHoverSuperior;
    QColor colorBordeTabPrecionadoSuperior;
    QColor colorBordeTabSelecionadoSuperior;

    //color BordeInferior

    QColor colorBordeTabPredeterminadoInferior;
    QColor colorBordeTabHoverInferior;
    QColor colorBordeTabPrecionadoInferior;
    QColor colorBordeTabSelecionadoInferior;

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

    int radioIzquierdoArriba = 1;
    int radioIzquierdoAbajo = 1;
    int radioDerechoArriba = 1;
    int radioDerechoAbajo = 1;


public:
    void atualizacionDeEstado(CustomTabBar *tabBar);

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

    bool getActivacionCustom() const;
    void setActivacionCustom(bool newActivacionCustom);

    QColor getColorBordeTabPredeterminadoSuperior() const;
    void setColorBordeTabPredeterminadoSuperior(const QColor &newColorBordeTabPredeterminadoSuperior);

    QColor getColorBordeTabHoverSuperior() const;
    void setColorBordeTabHoverSuperior(const QColor &newColorBordeTabHoverSuperior);

    QColor getColorBordeTabPrecionadoSuperior() const;
    void setColorBordeTabPrecionadoSuperior(const QColor &newColorBordeTabPrecionadoSuperior);

    QColor getColorBordeTabSelecionadoSuperior() const;
    void setColorBordeTabSelecionadoSuperior(const QColor &newColorBordeTabSelecionadoSuperior);

    QColor getColorBordeTabPredeterminadoInferior() const;
    void setColorBordeTabPredeterminadoInferior(const QColor &newColorBordeTabPredeterminadoInferior);

    QColor getColorBordeTabHoverInferior() const;
    void setColorBordeTabHoverInferior(const QColor &newColorBordeTabHoverInferior);

    QColor getColorBordeTabPrecionadoInferior() const;
    void setColorBordeTabPrecionadoInferior(const QColor &newColorBordeTabPrecionadoInferior);

    QColor getColorBordeTabSelecionadoInferior() const;
    void setColorBordeTabSelecionadoInferior(const QColor &newColorBordeTabSelecionadoInferior);

    QColor getColorBordeTabPredeterminadoIzquierdo() const;
    void setColorBordeTabPredeterminadoIzquierdo(const QColor &newColorBordeTabPredeterminadoIzquierdo);

    QColor getColorBordeTabHoverIzquierdo() const;
    void setColorBordeTabHoverIzquierdo(const QColor &newColorBordeTabHoverIzquierdo);

    QColor getColorBordeTabPrecionadoIzquierdo() const;
    void setColorBordeTabPrecionadoIzquierdo(const QColor &newColorBordeTabPrecionadoIzquierdo);

    QColor getColorBordeTabSelecionadoIzquierdo() const;
    void setColorBordeTabSelecionadoIzquierdo(const QColor &newColorBordeTabSelecionadoIzquierdo);

    QColor getColorBordeTabPredeterminadoDerecho() const;
    void setColorBordeTabPredeterminadoDerecho(const QColor &newColorBordeTabPredeterminadoDerecho);

    QColor getColorBordeTabHoverDerecho() const;
    void setColorBordeTabHoverDerecho(const QColor &newColorBordeTabHoverDerecho);

    QColor getColorBordeTabPrecionadoDerecho() const;
    void setColorBordeTabPrecionadoDerecho(const QColor &newColorBordeTabPrecionadoDerecho);

    QColor getColorBordeTabSelecionadoDerecho() const;
    void setColorBordeTabSelecionadoDerecho(const QColor &newColorBordeTabSelecionadoDerecho);

    int getBordeSuperiorPredeterminado() const;
    void setBordeSuperiorPredeterminado(int newBordeSuperiorPredeterminado);

    int getBordeInferiorPredeterminado() const;
    void setBordeInferiorPredeterminado(int newBordeInferiorPredeterminado);

    int getBordeIzquierdaPredeterminado() const;
    void setBordeIzquierdaPredeterminado(int newBordeIzquierdaPredeterminado);

    int getBordeDerechoPredeterminado() const;
    void setBordeDerechoPredeterminado(int newBordeDerechoPredeterminado);

    int getBordeSuperiorHover() const;
    void setBordeSuperiorHover(int newBordeSuperiorHover);

    int getBordeInferiorHover() const;
    void setBordeInferiorHover(int newBordeInferiorHover);

    int getBordeIzquierdaHover() const;
    void setBordeIzquierdaHover(int newBordeIzquierdaHover);

    int getBordeDerechoHover() const;
    void setBordeDerechoHover(int newBordeDerechoHover);

    int getBordeSuperiorPresionado() const;
    void setBordeSuperiorPresionado(int newBordeSuperiorPresionado);

    int getBordeInferiorPresionado() const;
    void setBordeInferiorPresionado(int newBordeInferiorPresionado);

    int getBordeIzquierdaPresionado() const;
    void setBordeIzquierdaPresionado(int newBordeIzquierdaPresionado);

    int getBordeDerechoPresionado() const;
    void setBordeDerechoPresionado(int newBordeDerechoPresionado);

    int getBordeSuperiorSelecionado() const;
    void setBordeSuperiorSelecionado(int newBordeSuperiorSelecionado);

    int getBordeInferiorSelecionado() const;
    void setBordeInferiorSelecionado(int newBordeInferiorSelecionado);

    int getBordeIzquierdaSelecionado() const;
    void setBordeIzquierdaSelecionado(int newBordeIzquierdaSelecionado);

    int getBordeDerechoSelecionado() const;
    void setBordeDerechoSelecionado(int newBordeDerechoSelecionado);

signals:
    void FondDeLetraChanged();
    void fondoTabPredeterminadoChanged();
    void fondoTabHoverChanged();
    void fondoTabPrecionadoChanged();
    void fondoTabSelecionadoChanged();
    void radioIzquierdoArribaChanged();
    void radioIzquierdoAbajoChanged();
    void radioDerechoArribaChanged();
    void radioDerechoAbajoChanged();
    void activacionChanged();
    void activacionCustomChanged();
    void colorBordeTabPredeterminadoSuperiorChanged();
    void colorBordeTabHoverSuperiorChanged();
    void colorBordeTabPrecionadoSuperiorChanged();
    void colorBordeTabSelecionadoSuperiorChanged();
    void colorBordeTabPredeterminadoInferiorChanged();
    void colorBordeTabHoverInferiorChanged();
    void colorBordeTabPrecionadoInferiorChanged();
    void colorBordeTabSelecionadoInferiorChanged();
    void colorBordeTabPredeterminadoIzquierdoChanged();
    void colorBordeTabHoverIzquierdoChanged();
    void colorBordeTabPrecionadoIzquierdoChanged();
    void colorBordeTabSelecionadoIzquierdoChanged();
    void colorBordeTabPredeterminadoDerechoChanged();
    void colorBordeTabHoverDerechoChanged();
    void colorBordeTabPrecionadoDerechoChanged();
    void colorBordeTabSelecionadoDerechoChanged();
    void bordeSuperiorPredeterminadoChanged();
    void bordeInferiorPredeterminadoChanged();
    void bordeIzquierdaPredeterminadoChanged();
    void bordeDerechoPredeterminadoChanged();
    void bordeSuperiorHoverChanged();
    void bordeInferiorHoverChanged();
    void bordeIzquierdaHoverChanged();
    void bordeDerechoHoverChanged();
    void bordeSuperiorPresionadoChanged();
    void bordeInferiorPresionadoChanged();
    void bordeIzquierdaPresionadoChanged();
    void bordeDerechoPresionadoChanged();
    void bordeSuperiorSelecionadoChanged();
    void bordeInferiorSelecionadoChanged();
    void bordeIzquierdaSelecionadoChanged();
    void bordeDerechoSelecionadoChanged();
};

#endif // ESTILOQSS_H
