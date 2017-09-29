/*
Tommy Pham - September 25 2017 2nd Period
Assignment Name : Program Problem 2
Create questions that will be displayed to the user, assumming they will follow all rules determined by the question.
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	//Define and Assign your Variable(s)
	int current_class_period;
	char class_type;
	bool answersMatched = false;
	char comp_sci_type;
	int calc_1, calc_2, calc_3, calc_4;

	// User Queries
	cout << "What class period are we in? (the number) : ";
	cin >> current_class_period;
	cout << "What kind of class is it? (A - Computer Science; B - Physics; C - Calculus; D - US History: ";
	cin >> class_type;
	if (class_type == 'A' || class_type == 'a') {
		answersMatched = true;
	}
	cout << "What roman numeral is that class? :";
	cin >> comp_sci_type;

	cout << "Give me 3 of your favorite numbers! : " << endl;
	cout << "Enter your first number... : ";
	cin >> calc_1;
	cout << "Enter your second number... : ";
	cin >> calc_2;
	cout << "Enter your final number... : ";
	cin >> calc_3;

	// Answers to Questions
	cout << "Yes, we are in " << current_class_period << "nd period." << endl;
	cout << boolalpha << "I believe that is " << answersMatched << " for question 2." << "\n";
	cout << "The roman numeral \"I or i\" is fine by me!" << endl;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_4 = calc_2 * calc_3;
	cout << calc_3 << " - " << calc_4 << " = " << calc_3 - calc_4 << endl;
	cout << calc_4 << " * " << calc_1 << " = " << calc_4 * calc_1 << endl;
	
	//Display Text
	pause(); // pauses to see the displayed text
}