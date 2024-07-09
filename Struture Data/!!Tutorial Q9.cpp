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
    // Existing code for earlierDate function
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
