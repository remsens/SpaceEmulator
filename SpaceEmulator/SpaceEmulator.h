#ifndef SPACEEMULATOR_H
#define SPACEEMULATOR_H

#include <QMainWindow>
#include"videoplayer.h"
namespace Ui {
class SpaceEmulator;
}

class SpaceEmulator : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpaceEmulator(QWidget *parent = 0);
    ~SpaceEmulator();
private slots:
    void onButtonFss();
    void onButtonGoogle();

private:
    Ui::SpaceEmulator *ui;
    VideoPlayer* m_player;
};

#endif // SPACEEMULATOR_H
