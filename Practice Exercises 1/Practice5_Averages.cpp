/*

Name:	 Tyler Jordan Clark
Date:	 03/11/2024
Purpose: Get the average from a series of values.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int var1 = 28;
	int var2 = 32;
	int var3 = 37;
	int var4 = 24;
	int var5 = 33;
	int avg;

	avg = (var1 + var2 + var3 + var4 + var5) / 5;

	cout << "The values are: " << var1 << ", " << var2 << ", " << var3 << ", " << var4 << ", " << var5 << endl;
	cout << "The average of the values is: " << avg << endl;

		return 0;
}
