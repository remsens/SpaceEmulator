#include "SpaceEmulator.h"
#include "ui_spaceemulator.h"
#include"videoplayer.h"
SpaceEmulator::SpaceEmulator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpaceEmulator)
{
    ui->setupUi(this);
    VideoPlayer* player = new VideoPlayer( ui->centralWidget);
    ui->verticalLayout_2->addWidget(player);

}

SpaceEmulator::~SpaceEmulator()
{
    delete ui;
}
