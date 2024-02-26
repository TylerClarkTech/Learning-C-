/* Name: Tyler Jordan Clark 
   Date: 02 / 26 / 24

    3. Sales Tax
        Write a program that will compute the total sales tax on a purchase.
        
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //make a var for purchase amount, the state tax and the country tax. Make a var to store solution.
    float purchase = 95;
    float salesTaxState = 0.04;
    float salesTaxCountry = 0.02;
    float totalTax;

    //add the state and country sales tax and multiply it by the purchase amount to get the totalTax
    totalTax = purchase * (salesTaxState + salesTaxCountry);

    //display totalTax w/ a fixed decimal place of two places
    cout << "Sales tax on this purchase will be: $"<< setprecision(2) << fixed << totalTax;

}
