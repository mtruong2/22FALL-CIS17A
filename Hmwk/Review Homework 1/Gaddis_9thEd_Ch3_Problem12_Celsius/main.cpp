/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on September 4, 2022, 11:30 AM
 * Purpose: Celsius to Fahrenheit
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
        float celsius,   // To hold the Celsius temperature
	fahrenheit;       // To hold the Fahrenheit temperature

	// Get the Celsius temperature.
	cout << "Enter the temperature in Celsius: ";
	cin >> celsius;

	// Convert Celsius to Fahrenheit.
	fahrenheit = ((9.0 / 5.0) * celsius) + 32;

	// Display the Fahrenheit temperature.
	cout << fixed << showpoint << setprecision(1)
	     << fahrenheit << " degrees Fahrenheit.\n";
    
    
    return 0;
}

