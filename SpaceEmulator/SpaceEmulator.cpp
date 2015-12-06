#include "SpaceEmulator.h"
#include "ui_spaceemulator.h"

SpaceEmulator::SpaceEmulator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpaceEmulator)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/pics/Logo/NIIPFP.png"));
    m_player = new VideoPlayer(ui->centralWidget);
    ui->verticalLayout_2->addWidget(m_player);
    connect(ui->butFSS,SIGNAL(clicked()),SLOT(onButtonFss()));
    connect(ui->butGoogle,SIGNAL(clicked()),SLOT(onButtonGoogle()));
    qApp->installEventFilter(this);
}

SpaceEmulator::~SpaceEmulator()
{
    delete ui;
}

void SpaceEmulator::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_F12)
    {
        if(m_player->parent() == ui->centralWidget )
        {
            m_player->setParent(0);
            m_player->showNormal();
            m_player->setGeometry(100,100,1000,600);
        }
        else
        {
            m_player->setParent(ui->centralWidget);
            ui->verticalLayout_2->addWidget(m_player);
        }
    }
}
//bool SpaceEmulator::eventFilter(QObject *obj, QEvent *event)
//{
//    if (event->type() == QEvent::KeyPress)
//    {
//        QKeyEvent *e = static_cast<QKeyEvent *>(event);
//        if(e->key() == Qt::Key_F12)
//        {


//            if(m_player->parent() == ui->centralWidget && obj==this )
//            {
//                m_player->setParent(0);
//                m_player->showNormal();
//            }
//            else if(obj == m_player)
//            {

//                m_player->setParent(this);
//                ui->verticalLayout_2->addWidget(m_player);
//                qDebug() << "key " << e->key() << "from" << obj;
//            }
//        }
//    }
//    return QObject::eventFilter(obj, event);
//}
void SpaceEmulator::onButtonFss()
{
    m_player->openFileSource("../SpaceEmulator/Video/FSS1920-30p.mp4");
    m_player->play();

}

void SpaceEmulator::onButtonGoogle()
{
    m_player->openFileSource("../SpaceEmulator/Video/Google1920-30p.mp4");
    m_player->play();
}
