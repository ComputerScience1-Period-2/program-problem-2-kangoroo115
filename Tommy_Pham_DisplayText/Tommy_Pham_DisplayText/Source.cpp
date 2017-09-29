/*
Tommy Pham - September 21 2017 2nd Period
Program Problem 1: Display Text
Learn how C++ complies a file and see the results on command prompt.
*/
// Libraries
#include <iostream>
#include <conio.h> // gives access to _kbhit()
// Namespaces
using namespace std;
// Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	cout << "/n";
}
// Main
void main() {
	int classPeriod = 2;
	cout << "Tommy Pham" << endl;
	cout << "Hello World!" << endl;
	pause();
}