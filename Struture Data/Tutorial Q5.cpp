#include <iostream>
using namespace std;

struct Rectangle {
    double length;
    double width;
};

int main() {
    // Create structure instances for kitchen, bedroom, and den
    Rectangle kitchen;
    Rectangle bedroom;
    Rectangle den;

    // Assign values to the length and width of each room
    kitchen = {10.5, 8.2};
    bedroom = {12.3, 9.8};
    den = {9.6, 7.4};

    // Calculate the total area of the three rooms
    double totalArea = (kitchen.length * kitchen.width) + (bedroom.length * bedroom.width) + (den.length * den.width);

    // Display the total area of the three rooms
    cout << "Total area of the three rooms: " << totalArea << " square units" << endl;

    return 0;
}