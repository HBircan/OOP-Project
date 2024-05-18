#include "Action.h" 
#include "Screen.h" 
#include "LibraryDatabase.h" 
#include "Keyboard.h" 

Action::Action(int theuserID, Screen& theScreen, Keyboard& theKeyboard, LibraryDatabase& theLibraryDatabase) 
	: userID(theuserID), screen(theScreen), keyboard(theKeyboard), libraryDatabase(theLibraryDatabase){}

int Action::getID() const {
	return userID;
}

Screen& Action::getScreen() const {
	return screen;
}

Keyboard& Action::getKeyboard() const {
	return keyboard;
}

LibraryDatabase& Action::getLibraryDatabase() const {
	return libraryDatabase;
}
