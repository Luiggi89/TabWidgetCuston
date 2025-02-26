#include "SistemaDeDibujoTexto.h"


SistemaDeDibujoTexto::SistemaDeDibujoTexto(QObject *parent)
    : QObject{parent}
{}

void SistemaDeDibujoTexto::actualizarText(QStyleOptionTab &opt, QTabBar *tabBar)
{
    textRect = tabBar->style()->subElementRect(QStyle::SE_TabBarTabText, &opt, tabBar);
    textRect.translate(PadingTexto);
    // Aplicar elipsis si el texto es más grande que el rectángulo disponible
    elidedText = tabBar->fontMetrics().elidedText(opt.text, Qt::ElideRight, textRect.width(), Qt::TextShowMnemonic);
    // Dibuja el texto alineado a la izquierda y centrado verticalmente
    colorText = opt.palette.color(QPalette::WindowText);

    if (cambiarColorTexto) {colorText = colorTextoCambiar;}

    opt.text = "";//vaciar el texto
}

void SistemaDeDibujoTexto::dibujarTexto(QStylePainter &painter, QStyleOptionTab opt)
{
    painter.setPen(colorText);
    painter.drawText(textRect, Qt::AlignLeft | Qt::AlignVCenter, elidedText);//dibuja las letras
}

int SistemaDeDibujoTexto::getMargenDerechoTextoDerecho() const
{
    return margenDerechoTextoDerecho;
}

void SistemaDeDibujoTexto::setMargenDerechoTextoDerecho(int newMargenDerechoTextoDerecho)
{
    if (margenDerechoTextoDerecho == newMargenDerechoTextoDerecho)
        return;
    margenDerechoTextoDerecho = newMargenDerechoTextoDerecho;
    emit margenDerechoTextoDerechoChanged();
}

QColor SistemaDeDibujoTexto::getColorTextoCambiar() const
{
    return colorTextoCambiar;
}

void SistemaDeDibujoTexto::setColorTextoCambiar(const QColor &newColorTextoCambiar)
{
    if (colorTextoCambiar == newColorTextoCambiar)
        return;
    colorTextoCambiar = newColorTextoCambiar;
    emit colorTextoCambiarChanged();
}

bool SistemaDeDibujoTexto::getCambiarColorTexto() const
{
    return cambiarColorTexto;
}

void SistemaDeDibujoTexto::setCambiarColorTexto(bool newCambiarColorTexto)
{
    if (cambiarColorTexto == newCambiarColorTexto)
        return;
    cambiarColorTexto = newCambiarColorTexto;
    emit cambiarColorTextoChanged();
}

QPoint SistemaDeDibujoTexto::getPadingTexto() const
{
    return PadingTexto;
}

void SistemaDeDibujoTexto::setPadingTexto(QPoint newPadingTexto)
{
    if (PadingTexto == newPadingTexto)
        return;
    PadingTexto = newPadingTexto;
    emit PadingTextoChanged();
}

QSize SistemaDeDibujoTexto::adaptarTextoConLaPestaña(QSize anchoDeLaPestanaIndividual, QString texTab, QFont fontText)
{
    QFontMetrics fm(fontText);
    int anchoTexto = fm.horizontalAdvance(texTab) + margenDerechoTextoDerecho + PadingTexto.x();

    if (anchoDeLaPestanaIndividual.width() <= anchoTexto) {
        return QSize(anchoTexto, anchoDeLaPestanaIndividual.height());
    }
    return anchoDeLaPestanaIndividual;

}
