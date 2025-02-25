#include "SistemaDeDibujoTexto.h"


SistemaDeDibujoTexto::SistemaDeDibujoTexto(QObject *parent)
    : QObject{parent}
{}

void SistemaDeDibujoTexto::actualizarText(QStyleOptionTab &opt, QTabBar *tabBar)
{
    textRect = tabBar->style()->subElementRect(QStyle::SE_TabBarTabText, &opt, tabBar);
    // Aplicar elipsis si el texto es más grande que el rectángulo disponible
    elidedText = tabBar->fontMetrics().elidedText(opt.text, Qt::ElideRight, textRect.width(), Qt::TextShowMnemonic);
    // Dibuja el texto alineado a la izquierda y centrado verticalmente
    colorText = opt.palette.color(QPalette::WindowText);

    opt.text = "";//vaciar el texto
}

void SistemaDeDibujoTexto::dibujarTexto(QStylePainter &painter, QStyleOptionTab opt)
{
    painter.setPen(colorText);
    painter.drawText(textRect, Qt::AlignLeft | Qt::AlignVCenter, elidedText);//dibuja las letras
}
