#include "TimeClock.h"
#include <stdexcept>
using namespace std;

TimeClock::TimeClock(int start, int end) {
	if (start < 0 || start > 2359 || end < 0 || end > 2359) {
		throw invalid_argument("Hours must be between 0 and 2359.");
	}
	startHours = start;
	endHours = end;
}

int TimeClock::getElapsedTime() const {
	int startHour = startHours / 100;
	int startMinute = startHours % 100;
	int endHour = endHours / 100;
	int endMinute = endHours % 100;

	int startTotalMinutes = startHour * 60 + startMinute;
	int endTotalMinutes = endHour * 60 + endMinute;

	int elapsedMinutes = endTotalMinutes - startTotalMinutes;
	if (elapsedMinutes < 0) {
		elapsedMinutes += 24 * 60; // Adjust for next day
	}

	return elapsedMinutes / 60; // Return elapsed time in hours
}

int main(){
	TimeClock clock(800, 1600);
	cout << "Elapsed time: " << clock.getElapsedTime() << " hours\n";
	return 0;
}