#include <iostream>
#include "MILTime.h"
using namespace std;

MILTime::MILTime() : Time(){
    milHours = 0;
    milSeconds = 0;

}

MILTime::MILTime(int hours, int seconds) : Time() {
    setTime(hours, seconds);
}

MILTime::~MILTime() {}

void MILTime::setTime(int hours, int seconds) {
    milHours = hours;
    milSeconds = seconds;

    // Convert military time to standard time
    int standardHours = milHours / 100;
    int standardMinutes = milHours % 100;
    int standardSeconds = milSeconds;

    // Adjust for 12-hour format
    if (standardHours > 12) {
        standardHours -= 12;
    } else if (standardHours == 0) {
        standardHours = 12;
    }

    // Store in base class variables
    Time::setVal(standardHours, standardMinutes, standardSeconds);
}

int MILTime::getHour() const {
    return milHours;
}

string MILTime::getStandHr() const {
    // Get the hour in standard form
    int standardHour = Time::getHour();
    int standardMinute = Time::getMinute();

    // Convert to 12-hour format
    int hour = standardHour;
    string period = "AM";
    if (hour > 12) {
        hour -= 12;
        period = "PM";
    } else if (hour == 0) {
        hour = 12;
    }

    // Format the hour and minute as a string
    string hourStr = to_string(hour);
    string minuteStr = to_string(standardMinute);
    if (standardMinute < 10) {
        minuteStr = "0" + minuteStr;
    }

    // Return the hour in standard form
    return hourStr + ":" + minuteStr + " " + period;
}

int main(){
    MILTime time(2359, 59);

    //can add user input and input validation here

    cout << "Time in military format: " << time.getHour() << endl;
    cout << "Time in standard format: " << time.getStandHr() << endl;
    return 0;
}