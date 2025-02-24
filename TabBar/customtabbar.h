#ifndef CUSTOMTABBAR_H
#define CUSTOMTABBAR_H

#include <QTabBar>
#include "SistemaDeUbicacionPestanas.h"

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


    void tabInserted(int index) override;
    void tabRemoved(int index) override;
private:
    SistemaDeUbicacionPestanas *sistemaDeUbicacionPestana = new SistemaDeUbicacionPestanas (this);

};

#endif // CUSTOMTABBAR_H
