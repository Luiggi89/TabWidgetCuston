#ifndef SISTEMADESCROOL_H
#define SISTEMADESCROOL_H

#pragma once

#include <QObject>

class SistemaDeScrool : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int movilidadDeScroll READ getMovilidadDeScroll WRITE setMovilidadDeScroll NOTIFY movilidadDeScrollChanged FINAL)
    Q_PROPERTY(int sensibilidad READ getSensibilidad WRITE setSensibilidad NOTIFY sensibilidadChanged FINAL)

public:
    explicit SistemaDeScrool(QObject *parent = nullptr);

private:
    int movilidadDeScroll = 8;
    int sensibilidad = 8;


public:

    int getMovilidadDeScroll() const;
    void setMovilidadDeScroll(int newMovilidadDeScroll);
    int getSensibilidad() const;
    void setSensibilidad(int newSensibilidad);

    void sistemaDeScrollDeLTabBar(int velocidadDelScrol, int tabWidthX,int AnchoXPadre);


signals:
    void movilidadDeScrollChanged();
    void sensibilidadChanged();
};

#endif // SISTEMADESCROOL_H
