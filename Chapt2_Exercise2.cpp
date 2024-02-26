/*
Tyler Jordan Clark 02/26/24
  2.Sales Prediction
	One division of the company is making 58% of total sales.  Based on that percentage,
	write a program that will predict how much the division will generate if the company
	has $8.6 million in sales this year.
*/

#include <iostream>
#include <iomanip>
using namespace std;

float main() {
	float eastCoastTotal;

	//set total amount to the total amount of sales
	float total = 8600000;

	//problem dictates that the East Coast Division makes up 58% of sales, calculate what 58% of total
	eastCoastTotal = total * 0.58;

	//output eastCoastTotal and only show 2 places after the decimal
	cout << "Total earned by the East Coast division is: " << setprecision (2) << fixed <<eastCoastTotal;
	return 0;
}