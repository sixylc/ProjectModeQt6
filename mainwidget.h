#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include "lcwidget.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public LCWidget
{
    Q_OBJECT

public:
    explicit MainWidget(LCWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
};

#endif // MAINWIDGET_H
