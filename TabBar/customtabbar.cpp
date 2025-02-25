#include "customtabbar.h"

CustomTabBar::CustomTabBar(QWidget *parent)
    : QTabBar{parent}
{}


void CustomTabBar::tabInserted(int index)
{
    QTabBar::tabInserted(index);
    sistemaDeUbicacionPestana->InsertarInformacionPestanas(index, count(),tabSizeHint(index).width(), sistemasDeScrool->getMovilidadDeScroll());
}


void CustomTabBar::tabRemoved(int index)
{
    QTabBar::tabRemoved(index);
    sistemaDeUbicacionPestana->EliminarInformacionPestana(index);
}

void CustomTabBar::dibujarPestanas(int numeroPestanas, QStylePainter &painter)
{
    QStyleOptionTab opt;
    initStyleOption(&opt, numeroPestanas);
    //Aplicar desplazamiento vertical
    sistemaDeDibujaTexto->actualizarText(opt,this);
    painter.drawControl(QStyle::CE_TabBarTab, opt); // dibuja el contenedor de la pestaña
    sistemaDeDibujaTexto->dibujarTexto(painter,opt);
}



QSize CustomTabBar::tabSizeHint(int index) const
{
    return sistemaDeDibujaTexto->adaptarTextoConLaPestaña(sistemaDeUbicacionPestana->getAreaDeLaPestana(),tabText(index), font());
}

QSize CustomTabBar::sizeHint() const
{
    int totalAreaDeLasPestanas = 2;
    for (int var = 0; var < count(); ++var) {
        totalAreaDeLasPestanas += sistemaDeUbicacionPestana->getAnchoIndividualPestanasX().at(var)
                                  + sistemaDeUbicacionPestana->getMargenesEntrePestanasX().at(var);
    }
    return QSize(totalAreaDeLasPestanas, sistemaDeUbicacionPestana->getAreaDeLaPestana().height());
}


QSize CustomTabBar::minimumSizeHint() const
{
    return QSize(0,0);
}



void CustomTabBar::paintEvent(QPaintEvent *event)
{
    QStylePainter painter(this);
    for (int i = 0; i < count(); ++i) {
        dibujarPestanas(i, painter);
    }

    QWidget::paintEvent(event);  // Llama a la implementación base
}



void CustomTabBar::initStyleOption(QStyleOptionTab *option, int tabIndex) const
{
    sistemasDeScrool->recalcularAnchoScrool(sizeHint().width(), parentWidget()->width());
    sistemaDeUbicacionPestana->actulizarListaInforPestanas(tabIndex, count(), tabSizeHint(tabIndex).width(), sistemasDeScrool->getMovilidadDeScroll());
    option->rect = sistemaDeUbicacionPestana->getHitBOx_DE_La_Pestanas().at(tabIndex);
    sistemaDeEstiloPestanas->actualizarEstiloDeLasPestanas(option, tabIndex, this);
}



bool CustomTabBar::event(QEvent *event)
{
    if (event->type() == QEvent::HoverMove)
    {
        QHoverEvent *hoverEvent = static_cast<QHoverEvent *>(event);
        sistemaDeEstiloPestanas->hoverIsMauseHover(hoverEvent);
        update();

    }else if (event->type() == QEvent::HoverLeave) {
        sistemaDeEstiloPestanas->reinicioPointIsMauseHover();
        update();
    }

    return QTabBar::event(event);
}



void CustomTabBar::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        QPoint pointnext = event->pos();
        sistemaDeEstiloPestanas->IsPrecionePestanas(pointnext, this);
        update();

    }
}



void CustomTabBar::wheelEvent(QWheelEvent *event)
{
    //delta() o angleDelta().y() según la versión de Qt
    int velocidadDelScrol = event->angleDelta().y();
    sistemasDeScrool->sistemaDeScrollDeLTabBar(velocidadDelScrol);
    update(); // Repintar el widget
}


