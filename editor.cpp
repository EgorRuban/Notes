#include "editor.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}
