#include "LibraryKeyboard.h"
#include <iostream>

using namespace std;

string LibraryKeyboard::GetInput() const {
    string input;
    cout << "Please enter input from the keyboard: ";
    getline(cin, input);
    return input;
}

