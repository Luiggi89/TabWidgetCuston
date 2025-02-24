#ifndef SISTEMADEUBICACIONPESTANAS_H
#define SISTEMADEUBICACIONPESTANAS_H

#include <QObject>
#include <QRect>
#include <QSize>

class SistemaDeUbicacionPestanas : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int separacionPestana READ getSeparacionPestana WRITE setSeparacionPestana NOTIFY separacionPestanaChanged FINAL)
    Q_PROPERTY(int margenTextoPestana READ getMargenTextoPestana WRITE setMargenTextoPestana NOTIFY margenTextoPestanaChanged FINAL)
    Q_PROPERTY(QSize AreaDeLaPestana READ getAreaDeLaPestana WRITE setAreaDeLaPestana NOTIFY AreaDeLaPestanaChanged FINAL)
    Q_PROPERTY(QVector<int> anchoIndividualPestanasX READ getAnchoIndividualPestanasX WRITE setAnchoIndividualPestanasX NOTIFY anchoIndividualPestanasXChanged FINAL)
    Q_PROPERTY(QVector<int> margenesEntrePestanasX READ getMargenesEntrePestanasX WRITE setMargenesEntrePestanasX NOTIFY margenesEntrePestanasXChanged FINAL)
    Q_PROPERTY(QVector<int> positionPestanasIndividual_X READ getPositionPestanasIndividual_X WRITE setPositionPestanasIndividual_X NOTIFY positionPestanasIndividual_XChanged FINAL)
    Q_PROPERTY(QVector<QRect> HitBOx_DE_La_SeparacionDePestanas READ getHitBOx_DE_La_SeparacionDePestanas WRITE setHitBOx_DE_La_SeparacionDePestanas NOTIFY HitBOx_DE_La_SeparacionDePestanasChanged FINAL)
    Q_PROPERTY(QVector<QRect> HitBOx_DE_La_Pestanas READ getHitBOx_DE_La_Pestanas WRITE setHitBOx_DE_La_Pestanas NOTIFY HitBOx_DE_La_PestanasChanged FINAL)

public:
    explicit SistemaDeUbicacionPestanas(QObject *parent = nullptr);

    int getSeparacionPestana() const;
    void setSeparacionPestana(int newSeparacionPestana);

    int getMargenTextoPestana() const;
    void setMargenTextoPestana(int newMargenTextoPestana);

    QSize getAreaDeLaPestana() const;
    void setAreaDeLaPestana(const QSize &newAreaDeLaPestana);

    QVector<int> getAnchoIndividualPestanasX() const;
    void setAnchoIndividualPestanasX(const QVector<int> &newAnchoIndividualPestanasX);
    void setIndividualAnchoIndividualPestanasX(const int &newAnchoIndividualPestanasX, int index);


    QVector<int> getMargenesEntrePestanasX() const;
    void setMargenesEntrePestanasX(const QVector<int> &newMargenesEntrePestanasX);

    void setIndividualMargenesEntrePestanasX(const int &newAnchoIndividualPestanasX, int index);

    QVector<int> getPositionPestanasIndividual_X() const;
    void setPositionPestanasIndividual_X(const QVector<int> &newPositionPestanasIndividual_X);
    void setIndividuaPositionPestanasIndividual_X(const int &newPestanasIndividual_X, int index);

    QVector<QRect> getHitBOx_DE_La_SeparacionDePestanas() const;
    void setHitBOx_DE_La_SeparacionDePestanas(const QVector<QRect> &newHitBOx_DE_La_SeparacionDePestanas);
    void setIndividualHitBOx_DE_La_SeparacionDePestanas(const QRect &newHitBOx_DE_La_SeparacionDePestanas, int index);


    QVector<QRect> getHitBOx_DE_La_Pestanas() const;
    void setHitBOx_DE_La_Pestanas(const QVector<QRect> &newHitBOx_DE_La_Pestanas);
    void setIndividualHitBOx_DE_La_Pestanas(const QRect &newHitBOx_DE_La_Pestanas, int index);

private:
    int separacionPestana = 20;
    int margenTextoPestana = 20;
    QSize AreaDeLaPestana = QSize (100,20);

    mutable QVector  <int> anchoIndividualPestanasX = {AreaDeLaPestana.width()};
    mutable QVector  <int> margenesEntrePestanasX = {separacionPestana};
    mutable QVector  <int> positionPestanasIndividual_X = {0};

    mutable QVector  <QRect> HitBOx_DE_La_SeparacionDePestanas = {QRect (AreaDeLaPestana.width(),0,separacionPestana,AreaDeLaPestana.height())};
    mutable QVector  <QRect> HitBOx_DE_La_Pestanas = {QRect (0,0,AreaDeLaPestana.width(), AreaDeLaPestana.height())};

signals:
    void separacionPestanaChanged();
    void margenTextoPestanaChanged();
    void AreaDeLaPestanaChanged();
    void anchoIndividualPestanasXChanged();
    void margenesEntrePestanasXChanged();
    void positionPestanasIndividual_XChanged();
    void HitBOx_DE_La_SeparacionDePestanasChanged();
    void HitBOx_DE_La_PestanasChanged();

public:
    void actulizarListaInforPestanas(int index, int count, int TabSizeHintX, int movilidadScroll) const;
    void InsertarInformacionPestanas(int index, int count,int TabSizeHintX, int movilidadScroll);
    void EliminarInformacionPestana (int index);
    int quePestañasFueUbicado(QPoint point, int count);
};

#endif // SISTEMADEUBICACIONPESTANAS_H
