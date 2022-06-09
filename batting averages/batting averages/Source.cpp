/* Oliver Kirsch - CSIT 121

This program will tell you the batting average of a player with the input
of number of times at bat and the number of hits
*/

#include <iostream>
using namespace std;

int main()
{
	double hits, bat, average_percent, average_decimal;		// This is the name given to the input and output

	cout << "This will display the batting average.\n\n";		// Tells user what the program is doing

	cout << "Enter how many times you were up to bat: ";	// User inputs times at bat
	cin >> bat;		
	cout << "Enter how many hits you got: ";	// User inputs number of hits 
	cin >> hits;

	cout.precision(2);		// Tells program to stop after 2 decimal places

	static_cast <double> (average_percent = hits * 100 / bat);		// Equation to get batting average as a percent
	static_cast <double> (average_decimal = hits / bat);		// Equation to get batting average as a decimal
	cout << "\n\n";
	cout << "The average is " << average_percent << "% as a percent" << endl;	// Displays batting average to the user as a percent
	cout << "The average is " << average_decimal << " as a decimal" << endl;	// Displays batting average to the user as a decimal
	system ("pause");
}