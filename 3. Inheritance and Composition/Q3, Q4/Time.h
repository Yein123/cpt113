#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time();
        Time(int, int, int);
        ~Time();
        void print();
        void setVal(int, int, int);
        void getHMS(int&, int&, int&);
        int getHour()const;
        int getMinute()const;
        int getSecond()const;
};
#endif