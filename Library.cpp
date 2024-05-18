#include "Library.h"
#include "OverdueItem.h"
#include "Return.h"
#include "Lend.h"
#include "Register.h"
#include "Action.h"
#include <string>
using namespace std;

enum MenuOption { LEND = 1, RETURN, REGISTER, TRACK, EXIT };

Library::Library() {
	UserAuthen = false;
	currentUserID = 0;
	Name = "LIBRARBY";
	Location = "Internet";
}

void Library::run() {
	while (true) {
		while (!UserAuthen) {
			screen.displayMessageLine("\nWelcome!");
			authenticateUser();
		}
		performActions();
		UserAuthen = false;
		currentUserID = 0;
		screen.displayMessageLine("\nThank you! Goodbye!");
	}
}

void Library::authenticateUser() {
	screen.displayMessage("Please enter your account's ID: ");
	int accountID = keyboard.getInteger();
	screen.displayMessage("Enter your password: ");
	string pin = keyboard.getLine();
	UserAuthen = libraryDatabase.authenticateUser(accountID, pin);

	if (UserAuthen) {
		currentUserID = accountID;
		
	}
	else
		screen.displayMessageLine("\nInvalid account number or PIN.Please try again.");
}

Action* Library::createAction(int type) {

	Action* tempPtr = nullptr;
	switch (type) {
	case LEND:
		tempPtr = new Lend(currentUserID, screen, keyboard, libraryDatabase);
		break;
	case RETURN:
		tempPtr = new Return(currentUserID, screen, keyboard, libraryDatabase);
		break;
	case REGISTER:
		tempPtr = new Register(currentUserID, screen, keyboard, libraryDatabase);
		break;
	case TRACK:
		tempPtr = new OverdueItem(currentUserID, screen, keyboard, libraryDatabase);
		break;
	}
	return tempPtr;
}

void Library::performActions() {
	Action* currentActionPtr;
	bool userExited = false;
	while (!userExited) {

		int mainMenuSelection = displayMainMenu();
		switch (mainMenuSelection) {
		case LEND:
		case RETURN:
		case REGISTER:
		case TRACK:
			currentActionPtr = createAction(mainMenuSelection);
			currentActionPtr->Execute();
			delete currentActionPtr;
			break;
		case EXIT:
			screen.displayMessageLine("\nExiting the system...");
			userExited = true;
			break;
		default:
			screen.displayMessageLine("\nYou did not enter a valid selection. Try again.");
			break;
		}
	}
}

int Library::displayMainMenu() const {
	screen.displayMessageLine("\nMain menu:");
	screen.displayMessageLine("1 - Borrow an item");
	screen.displayMessageLine("2 - Return an item");
	screen.displayMessageLine("3 - Register an item/member");
	screen.displayMessageLine("4 - Track an item");
	screen.displayMessageLine("5 - Exit");
	screen.displayMessage("Enter a choice: ");
	return keyboard.getInteger();
}
