#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <string>
using namespace std;

class Keyboard {
public:
	 int getInteger() const; 
	 long getLongInteger() const;
	 string getLine() const; 
}; 
#endif
