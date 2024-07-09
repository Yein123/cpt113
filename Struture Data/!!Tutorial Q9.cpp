#include <iostream>

using namespace std;

struct DateTime {
    int year;
    int month;
    int date;
    int hours;
    int minutes;
    int seconds;
};

//can add on data validation here
void setDetail(DateTime& date) {
    cout << "Year: ";
    cin >> date.year;
    cout << "Month: ";
    cin >> date.month;
    cout << "Date: ";
    cin >> date.date;
    cout << "Hours: ";
    cin >> date.hours;
    cout << "Minutes: ";
    cin >> date.minutes;
    cout << "Seconds: ";
    cin >> date.seconds;
}

DateTime earlierDate(DateTime date1, DateTime date2) {
    if (date1.year < date2.year) {
        return date1;
    } else if (date1.year > date2.year) {
        return date2;
    } else {
        if (date1.month < date2.month) {
            return date1;
        } else if (date1.month > date2.month) {
            return date2;
        } else {
            if (date1.date < date2.date) {
                return date1;
            } else if (date1.date > date2.date) {
                return date2;
            } else {
                if (date1.hours < date2.hours) {
                    return date1;
                } else if (date1.hours > date2.hours) {
                    return date2;
                } else {
                    if (date1.minutes < date2.minutes) {
                        return date1;
                    } else if (date1.minutes > date2.minutes) {
                        return date2;
                    } else {
                        if (date1.seconds < date2.seconds) {
                            return date1;
                        } else {
                            return date2;
                        }
                    }
                }
            }
        }
    }
}

int main() {
    DateTime date1, date2;
    
    cout << "Enter details for date and time of first instance:" << endl;
    setDetail(date1);
    
    cout << "Enter details for date and time of second instance:" << endl;
    setDetail(date2);
    
    DateTime earlier = earlierDate(date1, date2);
    
    cout << "Earlier date: " << earlier.year << "-" << earlier.month << "-" << earlier.date << endl;
    
    return 0;
}
