/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on September 4, 2022, 11:52 AM
 * Purpose: Population
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
        
    double organisms;	// To hold the number of organisms
	double increase;	// To hold the average daily increase
	int days;			// To hold the number of days to multiply

	// Get the number of starting organsims.
	do
	{
		cout << "Enter the starting number of organisms: ";
		cin >> organisms;

		// Do not accept a number less than 2 for the 
		// starting size of the population.
		if (organisms < 2)
			cout << "The starting number of organisms "
				 << "must be at least 2.\n\n";
	} while (organisms < 2);

	// Get the average daily increase.
	do
	{
		cout << "Enter the average daily population "
			 << "increase (as a percentage): ";
		cin >> increase;

		// Do not accept negative values for the average
		// daily population increase.
		if (increase < 0)
			cout << "The average daily population increase "
				 << "must be a positive value.\n\n";
	} while (increase < 0);

	// Get the number of days the organims with multiply.
	do
	{
		cout << "Enter the number of days they will multiply: ";
		cin >> days;

		// Do not accept a number less than 1 for the number 
		// of days they will multiply.
		if (days < 1)
			cout << "The number of days must be at least 1.\n\n";
	} while (days < 1);

	// Set the output formatting to display only whole numbers.
	cout << fixed << noshowpoint << setprecision(0);

	// Use a loop to display the population for each day.
	for (int count = 1; count <= days; count++)
	{
		// Calculate the daily increase in the population.
		organisms += organisms * increase;

		// Display the results.
		cout << "On day " << count 
			 << " the population size was " 
			 << organisms << ".\n";
	}
    
    return 0;
}

