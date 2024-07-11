#ifndef TIMECLOCK_H
#define TIMECLOCK_H

#include "MilTime.h"

class TimeClock : public MILTime {
private:
	int startHours;
	int endHours;

public:
	TimeClock(int start, int end);
	int getElapsedTime() const;
};

#endif // TIMECLOCK_H