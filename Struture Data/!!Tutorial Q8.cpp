#include <iostream>
#include <string>

using namespace std;

const int NUM_BINS = 10;
const int MAX_PARTS = 30;

struct Bin {
    string description;
    int numParts;
};

void displayBins(const Bin bins[]) {
    cout << "Bin\tDescription\t\tNumber of Parts\n";
    for (int i = 0; i < NUM_BINS; i++) {
        cout << i + 1 << "\t" << bins[i].description << "\t\t" << bins[i].numParts << "\n";
    }
}

void addParts(Bin& bin, int numToAdd) {
    if (bin.numParts + numToAdd <= MAX_PARTS) {
        bin.numParts += numToAdd;
    } else {
        cout << "Cannot add more parts than the bin can hold.\n";
    }
}

void removeParts(Bin& bin, int numToRemove) {
    if (bin.numParts - numToRemove >= 0) {
        bin.numParts -= numToRemove;
    } else {
        cout << "Cannot remove more parts than the bin contains.\n";
    }
}

int main() {
    Bin bins[NUM_BINS] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 25},
        {"Cable", 18},
        {"Rod", 12}
    };

    int choice;
    int binIndex;
    int numToAdd;
    int numToRemove;

    do {
        displayBins(bins);
        cout << "\nSelect a bin (1-10) or enter 0 to quit: ";
        cin >> choice;

        if (choice >= 1 && choice <= NUM_BINS) {
            binIndex = choice - 1;
            cout << "Enter the number of parts to add: ";
            cin >> numToAdd;
            addParts(bins[binIndex], numToAdd);

            cout << "Enter the number of parts to remove: ";
            cin >> numToRemove;
            removeParts(bins[binIndex], numToRemove);
        } else if (choice != 0) {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}