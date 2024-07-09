#include <iostream>
using namespace std;

struct HourlyPaid {
    double HoursWorked;
    double HourlyRate;
};

struct Salaried {
    double Salary;
    double Bonus;
};


/* Union Definition: The union Worker can store either an HourlyPaid or a Salaried worker.
User Input: The main function prompts the user to enter whether the worker is hourly paid or salaried.
Conditional Handling: Based on the user's choice, the appropriate member of the union is accessed and used to store and display the worker's details.*/
union Worker {
    HourlyPaid hourlyWorker;
    Salaried salariedWorker;
};

int main() {
    Worker worker;
    char choice;

    cout << "Enter 'H' for hourly paid worker or 'S' for salaried worker: ";
    cin >> choice;

    if (choice == 'H' || choice == 'h') {
        cout << "Enter hours worked: ";
        cin >> worker.hourlyWorker.HoursWorked;

        while (worker.hourlyWorker.HoursWorked < 0 || worker.hourlyWorker.HoursWorked > 80) {
            cout << "Invalid input. Enter hours worked (0-80): ";
            cin >> worker.hourlyWorker.HoursWorked;
        }

        cout << "Enter hourly rate: ";
        cin >> worker.hourlyWorker.HourlyRate;

        while (worker.hourlyWorker.HourlyRate < 0) {
            cout << "Invalid input. Enter hourly rate (>= 0): ";
            cin >> worker.hourlyWorker.HourlyRate;
        }

        double pay = worker.hourlyWorker.HoursWorked * worker.hourlyWorker.HourlyRate;
        cout << "Pay: $" << pay << endl;
    } else if (choice == 'S' || choice == 's') {
        cout << "Enter salary: ";
        cin >> worker.salariedWorker.Salary;

        while (worker.salariedWorker.Salary < 0) {
            cout << "Invalid input. Enter salary (>= 0): ";
            cin >> worker.salariedWorker.Salary;
        }

        cout << "Enter bonus: ";
        cin >> worker.salariedWorker.Bonus;

        while (worker.salariedWorker.Bonus < 0) {
            cout << "Invalid input. Enter bonus (>= 0): ";
            cin >> worker.salariedWorker.Bonus;
        }

        double pay = worker.salariedWorker.Salary + worker.salariedWorker.Bonus;
        cout << "Pay: $" << pay << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}