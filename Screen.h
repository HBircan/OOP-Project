#ifndef SCREEN_H
#define SCREEN_H
#include <string>
using namespace std;

class Screen
{
 public:
	 void displayMessage(string) const; // output a message
	 void displayMessageLine(string) const; // output message with newline
	 void displayLongNumber(long) const;
	 void displayLongNumberLine(long) const;
	 void displayNumber(int) const;
	 void displayNumberLine(int) const;
 }; 
#endif 
