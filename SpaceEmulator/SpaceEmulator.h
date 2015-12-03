#ifndef SPACEEMULATOR_H
#define SPACEEMULATOR_H

#include <QMainWindow>

namespace Ui {
class SpaceEmulator;
}

class SpaceEmulator : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpaceEmulator(QWidget *parent = 0);
    ~SpaceEmulator();

private:
    Ui::SpaceEmulator *ui;
};

#endif // SPACEEMULATOR_H
