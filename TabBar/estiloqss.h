#ifndef ESTILOQSS_H
#define ESTILOQSS_H

#include <QObject>
#include <QColor>

class EstiloQss : public QObject
{
    Q_OBJECT
public:
    explicit EstiloQss(QObject *parent = nullptr);

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

    QString TabInfomacionPredeterminado(QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo);

    QString TabInformacionHover(QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo);

    QString TabInformacionPresione(QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo);

    QString tabInformacionSelecionado(QColor fondo, QColor colorBord, int radioIzquierdaArriba, int radioIzquierdaAbajo, int radioDerechaArriba, int radioDerechaAbajo);

signals:
};

#endif // ESTILOQSS_H
