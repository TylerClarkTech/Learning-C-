/*

Name: Tyler Jordan Clark
Date: 03/11/24
Purpose: Calculate employee's annual pay

*/

#include <iostream>
#include <iomanip>
using namespace std;

float main() {

	float payAmount = 2400;
	float payChecks = 26;
	float annualPay;

	annualPay = payAmount * payChecks;
	cout << "* --------------*";
	cout << endl << "To calculate an employee's annual pay we multiply their bi-weekly pay ($2400) " << endl;
	cout << endl << "by how many times a year they get paid (26).  This equals: $" << annualPay <<endl;
	cout << "* --------------*" << endl;
	return 0;
}