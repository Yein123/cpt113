#ifndef MILTIME_H
#define MILTIME_H

#include <iostream>
#include "Time.h"
using namespace std;

class MILTime:public Time{
    private:
        int milHours;
        int milSeconds;
    public:
        MILTime();
        MILTime(int, int);
        ~MILTime();
        void setTime(int, int);
        int getHour()const;
        string getStandHr()const;
};
#endif