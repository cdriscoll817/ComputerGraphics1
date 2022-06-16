#include "clock.h"
#include <iostream>
using namespace::std;

clock::clock(int sec, int min, int hour){
    clock::setTime(sec, min, hour);
}

void clock::setTime(int sec, int min, int hour){
    seconds = sec;
    minutes = min;
    hours = hour;
}

void clock::print(){
    if(hours<10)
        cout << "0" << hours;
    else
        cout << hours;
    if(minutes<10)
        cout << ":0" << minutes;
    else
        cout << ":" << minutes;
    if(seconds<10)
        cout << ":0" << seconds << endl;
    else
        cout << ":" << seconds << endl;
}

void clock::tick(){
    seconds ++;
    if(seconds==60)
    {
        seconds=0;
        minutes++;
        if(minutes==60)
        {
            minutes=0;
            hours++;
            if(hours==24)
            {
                hours=0;
            }
        }
    }
}
