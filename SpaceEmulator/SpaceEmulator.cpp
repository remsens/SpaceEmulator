#include "SpaceEmulator.h"
#include "ui_spaceemulator.h"

SpaceEmulator::SpaceEmulator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpaceEmulator)
{
    ui->setupUi(this);
    m_player = new VideoPlayer(ui->centralWidget);
    ui->verticalLayout_2->addWidget(m_player);
    connect(ui->butFSS,SIGNAL(clicked()),SLOT(onButtonFss()));
    connect(ui->butGoogle,SIGNAL(clicked()),SLOT(onButtonGoogle()));
}

SpaceEmulator::~SpaceEmulator()
{
    delete ui;
}

void SpaceEmulator::onButtonFss()
{
    m_player->openFileSource("D:/Work/Programming/QT/SpaceEmulator.workspace/SpaceEmulator/Video/SonyVegasExperiment.mp4");
    m_player->play();
}

void SpaceEmulator::onButtonGoogle()
{
    m_player->openFileSource("D:/Work/Programming/QT/SpaceEmulator.workspace/SpaceEmulator/Video/2maps.mp4");
    m_player->play();
}
