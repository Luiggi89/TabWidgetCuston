#ifndef TABWIDGETCUSTOM_H
#define TABWIDGETCUSTOM_H

#include <QTabWidget>
#include "TabBar/customtabbar.h"

class TabWidgetCustom : public QTabWidget
{
    Q_OBJECT

public:
    explicit TabWidgetCustom(QWidget *parent = nullptr);

private:
    CustomTabBar *tabBar = new CustomTabBar(this);
};

#endif // TABWIDGETCUSTOM_H
