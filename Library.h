#ifndef LIBRARY_H
#define LIBRARY_H
#include "LibraryDatabase.h"
#include "Screen.h"
#include "Keyboard.h"
#include <string>
using namespace std;

class Action;

class Library {
private:
	int currentUserID;
	bool UserAuthen;
	string Name;
	string Location;
	Screen screen;
	Keyboard keyboard;
	LibraryDatabase libraryDatabase;

	void authenticateUser();
	void performActions();
	int displayMainMenu() const;
	Action* createAction(int);

public:
	Library();
	void run();

};
#endif
