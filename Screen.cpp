#include <iostream>
#include <iomanip>
#include "Screen.h"
using namespace std;

 // output a message without a newline
void Screen::displayMessage(string message) const {
	 cout << message;
}
void Screen::displayMessageLine(string message) const {
	 cout << message << endl;
}

void Screen::displayLongNumber(long number) const {
	cout << number;
}
void Screen::displayLongNumberLine(long number) const {
	cout << number << endl;
}

void Screen::displayNumber(int number) const {
	cout << number;
}
void Screen::displayNumberLine(int number) const {
	cout << number << endl;
}
