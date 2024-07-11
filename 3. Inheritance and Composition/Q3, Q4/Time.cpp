#include <iostream>
#include "Time.h"
using namespace std;

Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}

Time::~Time(){
    cout << "Destroying Time obj" << endl;
}

void Time::print(){
    cout << "Time: " << hour << ":" << minute << ":" << second << endl;
}

void Time::setVal(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}

void Time::getHMS(int& h, int& m, int& s){
    h = hour;
    m = minute;
    s = second;
}

int Time::getHour()const{
    return hour;
}

int Time::getMinute()const{
    return minute;
}

int Time::getSecond()const{
    return second;
}
