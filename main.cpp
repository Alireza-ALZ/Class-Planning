#include "classplanning.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClassPlanning w;
    w.show();
    return a.exec();
}
