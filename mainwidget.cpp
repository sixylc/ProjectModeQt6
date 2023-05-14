#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(LCWidget *parent) :
    LCWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
}

MainWidget::~MainWidget()
{
    delete ui;
}
