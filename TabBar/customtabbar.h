#ifndef CUSTOMTABBAR_H
#define CUSTOMTABBAR_H
#pragma once

#include <QTabBar>

#include "SistemaDeDibujoTexto.h"
#include "SistemaDeEstiloPestanas.h"
#include "SistemaDeUbicacionPestanas.h"
#include "SistemaDeScrool.h"

class CustomTabBar : public QTabBar
{
    Q_OBJECT
public:
    explicit CustomTabBar(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void initStyleOption(QStyleOptionTab *option, int tabIndex) const override;

    bool event(QEvent *event) override;// sirve para el hover
    void mousePressEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

    QSize minimumSizeHint() const override;
    QSize tabSizeHint(int index) const override;
    QSize	sizeHint() const override;


    void tabInserted(int index) override;
    void tabRemoved(int index) override;
public:

    SistemaDeDibujoTexto* sistemaDeDibujaTexto = new SistemaDeDibujoTexto(this);
    SistemaDeUbicacionPestanas *sistemaDeUbicacionPestana = new SistemaDeUbicacionPestanas (this);
    SistemaDeEstiloPestanas *sistemaDeEstiloPestanas = new SistemaDeEstiloPestanas(this);
    SistemaDeScrool *sistemasDeScrool = new SistemaDeScrool(this);

public:
    void dibujarPestanas(int numeroPestanas, QStylePainter &painter);

};

#endif // CUSTOMTABBAR_H
