/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on September 4, 2022, 11:30 AM
 * Purpose: Days in a Month
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    // Variables
	int month;		// To hold the month
	int year;		// To hold the year
	int days = 31;  // The number of days, initialized to 31.

	// Get the month.
	cout << "Enter a month (1-12): ";
	cin >> month;
      
	// Get the year.
	cout << "Enter a year: ";
	cin >> year;

	// Determine the number of days in the month.
	switch (month)
	{
		case 1:
			// January has 31 days.     
			break;
		case 2: 
			// Determine if the year is a leap year.
			if ((year % 100 == 0) && (year % 400 == 0) || (year % 4 == 0))
				days = 29;  // If so, February has 29 days.
			else
				days = 28;  // If not, February has 28 days.
			break;
		case 3:
			// March has 31 days.     
			break;     
		case 4:
			// April has 30 days.     
			days = 30;
			break;
		case 5:
			// May has 31 days.     
			break;
		case 6:
			// June has 30 days.     
			days = 30;
			break;
		case 7:
			// July has 31 days.     
			break;
		case 8:
			// August has 31 days.     
			break;                        
		case 9:
			// September has 30 days.     
			days = 30;
			break;
		case 10:
			// October has 31 days.    
			break;            
		case 11:
			// November has 30 days.    
			days = 30;
			break;
		case 12:
			// Decemeber has 31 days.    
			break;       
	}
	// Display the number of days in the month.
	cout << days << " days" << endl << endl;    
    
    
    return 0;
}

