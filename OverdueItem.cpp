#include <string>
#include "OverdueItem.h"
#include "LibraryDatabase.h"
#include "Screen.h"
#include "Keyboard.h"
using namespace std;

OverdueItem::OverdueItem(int theuserID, Screen& theScreen, Keyboard& theKeyboard, LibraryDatabase& theLibraryDatabase)
	: Action(theuserID, theScreen, theKeyboard, theLibraryDatabase) {   }


void OverdueItem::Execute() {
	LibraryDatabase& libraryDatabase = getLibraryDatabase();
	Screen& screen = getScreen();
	Keyboard& keyboard = getKeyboard();
	int userID = getID();

	string choice = "Y";
	while (choice == "Y") {

		screen.displayMessage("\nEnter the ID of the item you want to track: ");
		int itemNumber = keyboard.getInteger();
		Magazine* magazine = libraryDatabase.getMagazine(itemNumber);
		DVD* dvd = libraryDatabase.getDvd(itemNumber);
		Book* book = libraryDatabase.getBook(itemNumber);
		if (book != NULL) {
			screen.displayMessage("Date of lending: ");
			screen.displayMessageLine(book->getLend());
			screen.displayMessage("Supposed date of returning: ");
			screen.displayMessageLine(book->getDeadline());
			screen.displayMessage("Date of returning: ");
			screen.displayMessageLine(book->getReturn());
			screen.displayMessage("\nWould you like to track another ID? Y/N: ");
			choice = keyboard.getLine();

		}
		else if (magazine != NULL) {
			screen.displayMessage("Date of lending: ");
			screen.displayMessageLine(magazine->getLend());
			screen.displayMessage("Supposed date of returning: ");
			screen.displayMessageLine(magazine->getDeadline());
			screen.displayMessage("Date of returning: ");
			screen.displayMessageLine(magazine->getReturn());
			screen.displayMessage("\nWould you like to track another ID? Y/N: ");
			choice = keyboard.getLine();

		}
		else if (dvd != NULL) {
			screen.displayMessage("Date of lending: ");
			screen.displayMessageLine(dvd->getLend());
			screen.displayMessage("Supposed date of returning: ");
			screen.displayMessageLine(dvd->getDeadline());
			screen.displayMessage("Date of returning: ");
			screen.displayMessageLine(dvd->getReturn());
			screen.displayMessage("\nWould you like to track another ID? Y/N: ");
			choice = keyboard.getLine();

		}
		else {
			screen.displayMessage("Invalid ID. Would you like to try again? Y/N: ");
			choice = keyboard.getLine();
		
		}
	}
}
