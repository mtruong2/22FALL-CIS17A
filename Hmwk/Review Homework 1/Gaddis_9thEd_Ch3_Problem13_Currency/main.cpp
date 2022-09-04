/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on September 4, 2022, 11:30 AM
 * Purpose: Currency
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
        
    // Constants
	const double YEN_PER_DOLLAR = 98.93;
	const double EUROS_PER_DOLLAR = 0.74; 

	double dollars; // Amount of US dollars
	double yen;     // Amount of Japanese Yen
	double euros;   // Amount of Euros
      
	// Get the amount of dollars
	cout << "Enter a dollar amount: ";
	cin  >> dollars;

	// Perform the conversions.
	yen = dollars * YEN_PER_DOLLAR;
	euros = dollars * EUROS_PER_DOLLAR;
   
	// Display the results.
	cout << "\nCoversion Results\n"
	     << "-----------------\n"
	     << fixed << showpoint << setprecision(2)
	     << yen << " Yen\n"
	     << euros << " Euros\n\n";
    
    return 0;
}

