#ifndef REVERSECLOCK_H
#define REVERSECLOCK_H

#include "clock.h"

class reverseClock : public clock
{
public:
    reverseClock(int sec, int min, int hour);
    void tick();
};

#endif // REVERSECLOCK_H
