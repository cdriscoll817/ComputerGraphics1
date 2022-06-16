#include "alarmclock.h"
#include <iostream>
using namespace::std;

alarmClock::alarmClock(int sec, int min, int hour, int asec, int amin, int ahour):normalClock(sec, min, hour){
    alarmSeconds = asec;
    alarmMinutes = amin;
    alarmHours = ahour;
}

void alarmClock::tick(){
    normalClock::tick();
    alarmClock::checkAlarm();
}

void alarmClock::checkAlarm(){
    if(alarmSeconds==seconds && alarmMinutes==minutes && alarmHours == hours)
    {
        cout << "Alarm! ";
        normalClock::print();
    }
}
