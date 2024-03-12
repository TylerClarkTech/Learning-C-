/*

Name: Tyler Jordan Clark
Date: 03/11/24
Purpose: Calculate rising water levels based on increase in water level

*/

#include <iostream>
#include <iomanip>
using namespace std;

float main() {
	
	//set the amount the water level will rise based on how many years the user inputs	
	float riseAmount = 2.4;
	float yearsAhead;
	float waterLevel;

	cout << "The world's water level rises 2.4ml every year. " << endl;
	cout << "How many years ahead would you like to look ahead? (Enter a number): ";
	cin >> yearsAhead; 

	waterLevel = riseAmount * yearsAhead;
	cout << endl << "The World's water level will rise " << waterLevel << "ml in " << yearsAhead << " years.  Learn to swim." << endl;
	return 0;
}