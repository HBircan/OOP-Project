#include <iostream>
#include <string>
using namespace std;
#include "Keyboard.h" 

 int Keyboard::getInteger() const {
	 int input; 
	 cin >> input; 
     return input;
 } 

 long Keyboard::getLongInteger() const {
	 long input; 
	 cin >> input; 
     return input;
 } 

 string Keyboard::getLine() const {
	 string input;
	 (cin >> input).get();
	 return input;
 }
