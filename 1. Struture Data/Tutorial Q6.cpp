#include <iostream>

using namespace std;

struct WeatherData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

const int NUM_MONTHS = 12;

int main() {
    WeatherData monthlyData[NUM_MONTHS];
    double totalRainfallYear = 0.0;
    double highestTemperature = -100.0;
    double lowestTemperature = 140.0;
    double sumOfAverageTemperatures = 0.0;

    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "Enter weather data for month " << i + 1 << ":\n";
        
        cout << "Total rainfall (in inches): ";
        cin >> monthlyData[i].totalRainfall;
        totalRainfallYear += monthlyData[i].totalRainfall;

        cout << "High temperature (in Fahrenheit): ";
        cin >> monthlyData[i].highTemperature;

        // Find the highest temperature
        if (monthlyData[i].highTemperature > highestTemperature) {
            highestTemperature = monthlyData[i].highTemperature;
        }

        cout << "Low temperature (in Fahrenheit): ";
        cin >> monthlyData[i].lowTemperature;

        // Find the lowest temperature
        if (monthlyData[i].lowTemperature < lowestTemperature) {
            lowestTemperature = monthlyData[i].lowTemperature;
        }

        // Calculate the average temperature
        monthlyData[i].averageTemperature = (monthlyData[i].highTemperature + monthlyData[i].lowTemperature) / 2;
        sumOfAverageTemperatures += monthlyData[i].averageTemperature;
    }

    double averageMonthlyRainfall = totalRainfallYear / NUM_MONTHS;
    double averageTemperature = sumOfAverageTemperatures / NUM_MONTHS;

    cout << "\nWeather statistics for the year:\n";
    cout << "Average monthly rainfall: " << averageMonthlyRainfall << " inches\n";
    cout << "Total rainfall for the year: " << totalRainfallYear << " inches\n";
    cout << "Highest temperature for the year: " << highestTemperature << " degrees Fahrenheit\n";
    cout << "Lowest temperature for the year: " << lowestTemperature << " degrees Fahrenheit\n";
    cout << "Average of all monthly average temperatures: " << averageTemperature << " degrees Fahrenheit\n";

    return 0;
}