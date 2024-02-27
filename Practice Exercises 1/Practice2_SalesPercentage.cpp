/*
Tyler Jordan Clark 02/26/24
  2.Sales Prediction
	One part of the company is making 64% of total sales.  Write a function that calculates
	how much of total sales a specific part of the company 
*/

#include <iostream>
#include <iomanip>
using namespace std;

float main() {
	float divisionOneTotal;

	//set total amount to the total amount of sales
	float total = 8600000;

	//problem dictates that the East Coast Division makes up 58% of sales, calculate what 64% of total
	divisionOneTotal = total * 0.64;

	//output eastCoastTotal and only show 2 places after the decimal
	cout << "Total earned by the Division One is: " << setprecision (2) << fixed << divisionOneTotal;
	return 0;
}