#include "SistemaDeEstiloPestanas.h"
#include "customtabbar.h"


SistemaDeEstiloPestanas::SistemaDeEstiloPestanas(QObject *parent)
    : QObject{parent}
{}

void SistemaDeEstiloPestanas::actualizarEstiloDeLasPestanas(QStyleOptionTab *option, int tabIndex, const CustomTabBar *tabBar) const
{
    option->state &= ~(QStyle::State_HasFocus | QStyle::State_MouseOver);

    option->text = tabBar->tabText(tabIndex);
    QColor colorFondo = option->palette.color(QPalette::Window);

    if (cambiarColor){colorFondo = colorFondoCambiar;}

    option->palette.setColor(QPalette::Window,colorFondo);

    if (tabBar->sistemaDeUbicacionPestana->getHitBOx_DE_La_Pestanas()[tabIndex].contains(isMouseHover))
        option->state |= QStyle::State_MouseOver;

    if (tabBar->isEnabled())
        option->state &= ~QStyle::State_Enabled;

    if (cualPestanaPrecione == tabIndex)
        option->state |= QStyle::State_Selected;
    /*if (tabIndex == mateniendoPrecionado)
        option->state |= QStyle::State_Sunken;
    if (tabIndex == pestanaPrecionado)
        option->state |= QStyle::State_Selected;
    if (tabIndex == pestanaPrecionado && hasFocus())
        option->state |= QStyle::State_HasFocus;

    if (isActiveWindow())
        option->state |= QStyle::State_Active;
    if (tabIndex == pestanaAtrastrado && tabIndex == isHover)
        option->state |= QStyle::State_MouseOver;
*/
}

void SistemaDeEstiloPestanas::hoverIsMauseHover(QHoverEvent *hoverEvent)
{
    isMouseHover = hoverEvent->position().toPoint(); // Convertir QPointF a QPoint
}

void SistemaDeEstiloPestanas::reinicioPointIsMauseHover()
{
    isMouseHover = reinicio;
}

void SistemaDeEstiloPestanas::IsPrecionePestanas(QPoint pointnext, CustomTabBar *tabBar)
{
    int index = tabBar->sistemaDeUbicacionPestana->quePestañasFueUbicado(pointnext, tabBar->count());
    tabBar->setCurrentIndex(index);
    if (index != -1) {
        cualPestanaPrecione = index;
    }
}

QPoint SistemaDeEstiloPestanas::getIsMouseHover() const
{
    return isMouseHover;
}

void SistemaDeEstiloPestanas::setIsMouseHover(QPoint newIsMouseHover)
{
    if (isMouseHover == newIsMouseHover)
        return;
    isMouseHover = newIsMouseHover;
    emit isMouseHoverChanged();
}

QColor SistemaDeEstiloPestanas::getColorFondoCambiar() const
{
    return colorFondoCambiar;
}

void SistemaDeEstiloPestanas::setColorFondoCambiar(const QColor &newColorFondoCambiar)
{
    if (colorFondoCambiar == newColorFondoCambiar)
        return;
    colorFondoCambiar = newColorFondoCambiar;
    emit colorFondoCambiarChanged();
}

bool SistemaDeEstiloPestanas::getCambiarColor() const
{
    return cambiarColor;
}

void SistemaDeEstiloPestanas::setCambiarColor(bool newCambiarColor)
{
    if (cambiarColor == newCambiarColor)
        return;
    cambiarColor = newCambiarColor;
    emit cambiarColorChanged();
}
