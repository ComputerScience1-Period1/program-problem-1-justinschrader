/*
Justin Schrader - 9/28/17 - 1
Program problem 1 : *
I am storing my period as a variable and having the text show 'Hello world,' my name, and my period.
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	int period;
	period = 1;
	// Define and Assign your variable(s)
	cout << "Hello World, I'm Justin Schrader from " << period << " and today is 9/28/17" << endl;

	// Display Text
	pause(); // pauses to see the displayed text
}
