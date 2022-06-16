#include <QCoreApplication>
#include <iostream>
using namespace::std;

#include <QFile>
#include <QTextStream>

#include "clock.h"
#include "normalclock.h"
#include "alarmclock.h"
#include "reverseclock.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int s, m, h, as, am, ah;
    int temp = 6;
    QStringList stringList;
    QFile file("clock.dat.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream textStream(&file);
    while(true)
    {
        QString line = textStream.readLine();
            if(line.isNull())
                break;
            else
                stringList.append(line);
    }
    foreach(QString str, stringList)
    {
        int value = str.toInt();
        if(temp == 6)
            s = value;
        else if(temp == 5)
            m = value;
        else if(temp ==4)
            h=value;
        else if(temp == 3)
            as = value;
        else if(temp ==2)
            am = value;
        else if(temp ==1)
            ah = value;
        temp--;
     }
    normalClock nc(s, m, h);
    alarmClock ac(s, m, h, as, am, ah);
    reverseClock rc(s, m, h);
    cout << "normal clock start - ";
    nc.print();
    cout << "alarm clock start - ";
    ac.print();
    cout << "reverse clock start - ";
    ac.print();
    int count = 100000;
    while (count > 0)
    {
        nc.tick();
        ac.tick();
        rc.tick();
        count--;
    }
    cout << "normal clock end - ";
    nc.print();
    cout << "alarm clock end - ";
    ac.print();
    cout << "reverse clock end - ";
    rc.print();
    return a.exec();
}
