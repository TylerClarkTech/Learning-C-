/*

Name:	 Tyler Jordan Clark
Date:	 03/12/24
Purpose: Calculate the total purchase amount and tax of 4 purchases

*/

#include <iostream>
#include <iomanip>
using namespace std;

float main(){

	float purchase1 = 16.92;
	float purchase2 = 22.49;
	float purchase3 = 23.33;
	float purchase4 = 42.58;

	float subtotal;
	float tax = 0.07;
	float total;

	subtotal = purchase1 + purchase2 + purchase3 + purchase4;

	total = (subtotal * tax) + subtotal;

	cout << "You have made four purchases, totalling to $" << subtotal << " before tax." << endl;
	cout << "Your total after tax is: $" << setprecision(2) << fixed << total << endl;
return 0;
}