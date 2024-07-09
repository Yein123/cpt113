#include <iostream>
#include <iomanip>
using namespace std;

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main()
{ 
    const int NUM_DAYS = 5; // The number of days
    double sales[NUM_DAYS]; // To hold sales for each day
    double total = 0.0; // Accumulator
    Day workDay; // Loop counter

    // Get the sales for each day.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
    {   
        // Create an array of day names.
        // The main reason for not using enums to "modify" is that enums themselves are immutable constants.
        string dayNames[] = { "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY" };
        cout << "Enter the sales for day " << dayNames[workDay] << ": ";
        cin >> sales[workDay];
    } 

    // Calcualte the total sales.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
        total += sales[workDay];

    // Display the total.
    cout << "The total sales are $" << setprecision(2) << fixed << total << endl;

    return 0;
}

// Output
// Enter the sales for day MONDAY: 100
// Enter the sales for day TUESDAY: 200
// Enter the sales for day WEDNESDAY: 300
// Enter the sales for day THURSDAY: 400
// Enter the sales for day FRIDAY: 500
// The total sales are $1500.00