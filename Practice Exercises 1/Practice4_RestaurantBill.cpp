/*

Name:	 Tyler Jordan Clark
Date:	 02/28/24
Purpose: Restaurant Tax & Tip Calculator

*/

#include <iostream>
#include <iomanip>
using namespace std;



float main()
{
	//Enter meal cost
	float mealCost = 67.88;
	float mealTip;
	float mealTax;

	//Enter tax and tip percentage
	float tax = 0.0675;
	float tip = 0.2;
	float totalBill;

	//Calculate the tip percentage and the tax percentage to be added to the total cost
	mealTip = mealCost * tip;
	mealTax = mealCost * tax;

	//Add the tax, tip, and original meal cost together to find out the total price of the bill
	totalBill = mealCost + mealTax + mealTip;
	
	//Neatly breakdown the cost and price of everything
	cout << "The meal cost: $" << setprecision(2) << fixed << mealCost << endl << endl;
	cout << "Tax(6.75%): $" << setprecision(2) << fixed << mealTax << endl << endl;
	cout << "Tip(20%): $" << setprecision(2) << fixed << mealTip << endl << endl;
	cout << "Total bill: $" << setprecision(2) << fixed << totalBill << endl;
	return 0;
}