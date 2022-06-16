#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include "normalclock.h"

class alarmClock : public normalClock
{
public:
    alarmClock(int sec, int min, int hour, int asec, int amin, int ahour);
    int alarmSeconds;
    int alarmMinutes;
    int alarmHours;
    void tick();
    void checkAlarm();
};

#endif // ALARMCLOCK_H
