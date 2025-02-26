#ifndef ESTILOQSS_H
#define ESTILOQSS_H

#include <QObject>
#include <QColor>
#include <QFont>
#include "customtabbar.h"

class EstiloQss : public QObject
{
    Q_OBJECT

    Q_PROPERTY(ActivacionCustom activacion READ getActivacion WRITE setActivacion NOTIFY activacionChanged FINAL)

    Q_PROPERTY(QFont FondDeLetra READ getFondDeLetra WRITE setFondDeLetra NOTIFY FondDeLetraChanged FINAL)

    Q_PROPERTY(QColor fondoTabPredeterminado READ getFondoTabPredeterminado WRITE setFondoTabPredeterminado NOTIFY fondoTabPredeterminadoChanged FINAL)
    Q_PROPERTY(QColor fondoTabHover READ getFondoTabHover WRITE setFondoTabHover NOTIFY fondoTabHoverChanged FINAL)
    Q_PROPERTY(QColor fondoTabPrecionado READ getFondoTabPrecionado WRITE setFondoTabPrecionado NOTIFY fondoTabPrecionadoChanged FINAL)
    Q_PROPERTY(QColor fondoTabSelecionado READ getFondoTabSelecionado WRITE setFondoTabSelecionado NOTIFY fondoTabSelecionadoChanged FINAL)

    Q_PROPERTY(QColor colorBordeTabPredeterminado READ getColorBordeTabPredeterminado WRITE setColorBordeTabPredeterminado NOTIFY colorBordeTabPredeterminadoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabHover READ getColorBordeTabHover WRITE setColorBordeTabHover NOTIFY colorBordeTabHoverChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabSelecionado READ getColorBordeTabSelecionado WRITE setColorBordeTabSelecionado NOTIFY colorBordeTabSelecionadoChanged FINAL)
    Q_PROPERTY(QColor colorBordeTabPrecionado READ getColorBordeTabPrecionado WRITE setColorBordeTabPrecionado NOTIFY colorBordeTabPrecionadoChanged FINAL)


    Q_PROPERTY(int radioIzquierdoArriba READ getRadioIzquierdoArriba WRITE setRadioIzquierdoArriba NOTIFY radioIzquierdoArribaChanged FINAL)
    Q_PROPERTY(int radioIzquierdoAbajo READ getRadioIzquierdoAbajo WRITE setRadioIzquierdoAbajo NOTIFY radioIzquierdoAbajoChanged FINAL)
    Q_PROPERTY(int radioDerechoArriba READ getRadioDerechoArriba WRITE setRadioDerechoArriba NOTIFY radioDerechoArribaChanged FINAL)
    Q_PROPERTY(int radioDerechoAbajo READ getRadioDerechoAbajo WRITE setRadioDerechoAbajo NOTIFY radioDerechoAbajoChanged FINAL)



public:
    enum ActivacionCustom
    {
        PorDefecto,
        Modificar
    };

    explicit EstiloQss(QObject *parent = nullptr);

    QString estiloDeLetra (QFont letra);

    QString fondoTabBar(QColor fondo);
    QString colorBorde(QColor colorBorde);

    QString bordesRadiusIzquierdaArriba(int radioIzquierda);
    QString bordesRadiusAbajoIzquierda(int radioArribar);
    QString bordesRadiusDerechaArriba(int radioDerechas);
    QString bordesRadiusAbajoDerecha(int radioAbajo);


    QString TabIndividual(QString complementario);
    QString TabIndividualHover(QString complementario);
    QString TabIndividualPresione(QString complementario);
    QString TabIndividualSelecionado(QString complementario);

    QString TabInfomacionPredeterminado(QFont fondDeLETRA,QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo);
    QString TabInformacionHover(QFont fondDeLETRA ,QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo);
    QString TabInformacionPresione(QFont fondDeLETRA, QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo);
    QString tabInformacionSelecionado(QFont fondDeLETRA,QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo);

private:

    ActivacionCustom activacion = PorDefecto;

    //Qfont

    QFont FondDeLetra;

    //fondo e tabBar

    QColor fondoTabPredeterminado;
    QColor fondoTabHover;
    QColor fondoTabPrecionado;
    QColor fondoTabSelecionado;

    //color Borde

    QColor colorBordeTabPredeterminado;
    QColor colorBordeTabHover;
    QColor colorBordeTabPrecionado;
    QColor colorBordeTabSelecionado;

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

    QColor getColorBordeTabPredeterminado() const;
    void setColorBordeTabPredeterminado(const QColor &newColorBordeTabPredeterminado);

    QColor getColorBordeTabHover() const;
    void setColorBordeTabHover(const QColor &newColorBordeTabHover);

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

    QColor getColorBordeTabPrecionado() const;
    void setColorBordeTabPrecionado(const QColor &newColorBordeTabPrecionado);

    ActivacionCustom getActivacion() const;
    void setActivacion(ActivacionCustom newActivacion);

signals:
    void FondDeLetraChanged();
    void fondoTabPredeterminadoChanged();
    void fondoTabHoverChanged();
    void fondoTabPrecionadoChanged();
    void fondoTabSelecionadoChanged();
    void colorBordeTabPredeterminadoChanged();
    void colorBordeTabHoverChanged();
    void colorBordeTabSelecionadoChanged();
    void radioIzquierdoArribaChanged();
    void radioIzquierdoAbajoChanged();
    void radioDerechoArribaChanged();
    void radioDerechoAbajoChanged();
    void colorBordeTabPrecionadoChanged();
    void activacionChanged();
};

#endif // ESTILOQSS_H
