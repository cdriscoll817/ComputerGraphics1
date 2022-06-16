#include "reverseclock.h"

reverseClock::reverseClock(int sec, int min, int hour):clock(sec, min, hour)
{
}

void reverseClock::tick()
{
    seconds --;
    if(seconds==-1)
    {
        seconds=59;
        minutes--;
        if(minutes==-1)
        {
            minutes=59;
            hours--;
            if(hours==-1)
            {
                hours=23;
            }
        }
    }
}
