#ifndef CLOCK_H
#define CLOCK_H


class clock
{
public:
    clock(int sec, int min, int hour);
    int seconds;
    int minutes;
    int hours;
    void tick();
    void print();
    void setTime(int sec, int min, int hour);
};

#endif // CLOCK_H
