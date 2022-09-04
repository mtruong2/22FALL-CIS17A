/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on September 4, 2022, 11:30 AM
 * Purpose: Rain or Shine
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, char** argv) 
{
	// Constant for the number of months
	const int NUM_MONTHS = 3;
   
	// Constant for the days in a month
	const int DAYS_IN_MONTH = 30;
   
	// Array of month names
	string name[NUM_MONTHS] = { "June", 
		                        "July", 
								"August" };
   
	// Array of characters for each day
	// of each month.
	char dayType[NUM_MONTHS][DAYS_IN_MONTH];
   
	// File stream object to read data from a file
	ifstream weatherData;
   
	int month;					// Month counter
	int day;					// Day counter
	int rainy;                  // Rainy days in a particular month
	int cloudy;					// Cloudy days in a particular month
	int sunny;					// Sunny days in a particular month
	int rainyTotal  = 0;        // Total number of rainy days
	int cloudyTotal = 0;        // Total number of cloudy days
	int sunnyTotal  = 0;        // Total number of sunny dauys
	int wettestMonth;			// Index of rainiest month
	int wettestMonthsRain = -1; // Number of rainy days in rainiest month
   
	//Open data file 
	weatherData.open("RainOrShine.txt");
   
	// Test for error.
	if (!weatherData)
	{
		cout << "Error opening data file.\n";
		return 0;  // Exit program
	}
   
	// Read weather data into the array 
	for (month = 0; month < NUM_MONTHS; month++)
	{  
		for (day = 0; day < DAYS_IN_MONTH; day ++)
			weatherData >> dayType[month][day];
	}

	// Close the data file
	weatherData.close();
   
	// Print report heading
	cout << "    Summer Weather Report\n\n"
		 << "Month    Rainy  Cloudy  Sunny\n"
		 << "_____________________________\n";
        
	// Accumulate and display weather statistics     
	for (month = 0; month < NUM_MONTHS; month++)
	{	
		// Reset accumulators
		rainy = cloudy = sunny = 0;

		// Accumulate weather statistics for current month 
		for (day = 0; day < DAYS_IN_MONTH; day ++)
		{  
			if (dayType[month][day] == 'R')
				rainy++;
			else if (dayType[month][day] == 'C')
				cloudy++;
			else
				sunny++;
		}

		// Add monthly totals to grand totals
		rainyTotal  += rainy;
		cloudyTotal += cloudy;
		sunnyTotal  += sunny;
      
		// Determine if this month is the rainiest so far
		if (rainy > wettestMonthsRain)
		{  
			wettestMonthsRain = rainy;
			wettestMonth = month;
		}

		// Display this month's results
		cout << left    << setw(6) << name[month] 
			 << right   << setw(6) << rainy << setw(8) 
		     << cloudy  << setw(7) << sunny << endl;
	}

	// Display summary data
	cout << "_____________________________\n";
	cout << "Totals" << setw(6) << rainyTotal << setw(8) 
	     << cloudyTotal << setw(7) << sunnyTotal << endl << endl;
	cout << name[wettestMonth] << " had the most rainy days.\n";
  
	return 0;
}