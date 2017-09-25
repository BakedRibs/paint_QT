#include "maincontrolpanel.h"

mainControlPanel::mainControlPanel(QWidget *parent) : QWidget(parent)
{
    setMinimumSize(1024,100);

    toolsFunction = new toolsFunctionWidget(this);
    shapesFunction = new shapesFunctionWidget(this);
    penWidthFunction = new penwidthFunctionWidget(this);
    colorsFunction = new colorsFunctionWidget(this);

    splitterFunctionWidget *splitterFunction1 = new splitterFunctionWidget(this);
    splitterFunctionWidget *splitterFunction2 = new splitterFunctionWidget(this);
    splitterFunctionWidget *splitterFunction3 = new splitterFunctionWidget(this);
    splitterFunctionWidget *splitterFunction4 = new splitterFunctionWidget(this);

    QHBoxLayout *controlPanelLayout = new QHBoxLayout;
    controlPanelLayout->addWidget(toolsFunction);
    controlPanelLayout->addWidget(splitterFunction1);
    controlPanelLayout->addWidget(shapesFunction);
    controlPanelLayout->addWidget(splitterFunction2);
    controlPanelLayout->addWidget(penWidthFunction);
    controlPanelLayout->addWidget(splitterFunction3);
    controlPanelLayout->addWidget(colorsFunction);
    controlPanelLayout->addWidget(splitterFunction4);
    controlPanelLayout->addStretch();

    this->setLayout(controlPanelLayout);
}

mainControlPanel::~mainControlPanel()
{

}

