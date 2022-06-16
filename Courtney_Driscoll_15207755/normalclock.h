#ifndef NORMALCLOCK_H
#define NORMALCLOCK_H

#include "clock.h"

class normalClock : public clock
{
public:
    normalClock(int sec, int min, int hour);
};

#endif // NORMALCLOCK_H
