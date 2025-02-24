#ifndef CUSTOMTABBAR_H
#define CUSTOMTABBAR_H

#include <QTabBar>

class CustomTabBar : public QTabBar
{
    Q_OBJECT
public:
    explicit CustomTabBar(QWidget *parent = nullptr);

};

#endif // CUSTOMTABBAR_H
