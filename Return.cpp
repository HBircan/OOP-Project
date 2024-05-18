#include <string>
#include "Return.h"
#include "LibraryDatabase.h"
#include "Screen.h"
#include "Keyboard.h"
using namespace std;

Return::Return(int theuserID, Screen& theScreen, Keyboard & theKeyboard, LibraryDatabase & theLibraryDatabase)
	 : Action(theuserID, theScreen, theKeyboard, theLibraryDatabase)	 {		 } 

void Return::Execute() {
	LibraryDatabase& libraryDatabase = getLibraryDatabase();
	Screen& screen = getScreen();
	Keyboard& keyboard = getKeyboard();
	int userID = getID();

	bool pozitive = true;

	string choice = "Y";
	while (choice == "Y") {
		screen.displayMessage("\nEnter the ID of the item: ");
		int itemNumber = keyboard.getInteger();

		Book* book = libraryDatabase.getBook(itemNumber);
		Magazine* magazine = libraryDatabase.getMagazine(itemNumber);
		DVD* dvd = libraryDatabase.getDvd(itemNumber);

		if (book != NULL) {
			if (book->IsAvailable() == true) {
				screen.displayMessage("This book is available for lending. Invalid entry. Would you like to try again? Y/N: ");
				choice = keyboard.getLine();
			}
			else {
				screen.displayMessageLine("The book you want to return: ");
				screen.displayMessage("ID:");
				screen.displayNumberLine(book->getID());
				screen.displayMessage("Name: ");
				screen.displayMessageLine(book->getName());
				screen.displayMessage("Author: ");
				screen.displayMessageLine(book->getAuthor());
				screen.displayMessage("ISBN: ");
				screen.displayLongNumberLine(book->getISBN());
				screen.displayMessage("Release year: ");
				screen.displayNumberLine(book->getDate());
				screen.displayMessage("Language: ");
				screen.displayMessageLine(book->getLanguage());
				screen.displayMessage("Genre: ");
				screen.displayMessageLine(book->getGenre());
				screen.displayMessage("Description: ");
				screen.displayMessageLine(book->getDesc());
				screen.displayMessage("Please confirm this is the right book. Y/N: ");
				choice = keyboard.getLine();
				if (choice == "Y") {
					book->setAvailable(pozitive);
					screen.displayMessage("Enter the date of returning: ");
					string returnDate = keyboard.getLine();
					book->setReturn(returnDate);
					screen.displayMessage("Return success! Would you like to return another item? Y/N: ");
					choice = keyboard.getLine();
				}
					
				else {
					screen.displayMessage("Would you like to return another item? Y/N: ");
					choice = keyboard.getLine();
				}


			}			

		}

		else if (magazine != NULL) {
			if (magazine->IsAvailable() == true) {
				screen.displayMessage("This magazine is available for lending. Invalid entry. Would you like to try again? Y/N: ");
				choice = keyboard.getLine();
			}
			else {
				screen.displayMessageLine("The magazine you want to return: ");
				screen.displayMessage("ID:");
				screen.displayNumberLine(magazine->getID());
				screen.displayMessage("Name: ");
				screen.displayMessageLine(magazine->getName());
				screen.displayMessage("Publisher: ");
				screen.displayMessageLine(magazine->getPublisher());
				screen.displayMessage("Issue Number: ");
				screen.displayNumberLine(magazine->getIssue());
				screen.displayMessage("Release year: ");
				screen.displayNumberLine(magazine->getDate());
				screen.displayMessage("Language: ");
				screen.displayMessageLine(magazine->getLanguage());
				screen.displayMessage("Genre: ");
				screen.displayMessageLine(magazine->getGenre());
				screen.displayMessage("Description: ");
				screen.displayMessageLine(magazine->getDesc());
				screen.displayMessage("Please confirm this is the right magazine. Y/N: ");
				choice = keyboard.getLine();
				if (choice == "Y") {
					magazine->setAvailable(pozitive);
					screen.displayMessage("Enter the date of returning: ");
					string returnDate = keyboard.getLine();
					magazine->setReturn(returnDate);
					screen.displayMessage("Return success! Would you like to return another item? Y/N: ");
					choice = keyboard.getLine();
				}

				else {
					screen.displayMessage("Would you like to return another item? Y/N: ");
					choice = keyboard.getLine();
				}

			}

		}
		else if (dvd != NULL) {
			if (dvd->IsAvailable() == true) {
				screen.displayMessage("This dvd is available for lending. Invalid entry. Would you like to try again? Y/N: ");
				choice = keyboard.getLine();
			}
			else {
				screen.displayMessageLine("The book you want to return: ");
				screen.displayMessage("ID:");
				screen.displayNumberLine(dvd->getID());
				screen.displayMessage("Name: ");
				screen.displayMessageLine(dvd->getName());
				screen.displayMessage("Director: ");
				screen.displayMessageLine(dvd->getDirector());
				screen.displayMessage("Minutes: ");
				screen.displayLongNumberLine(dvd->getMinute());
				screen.displayMessage("Release year: ");
				screen.displayNumberLine(dvd->getDate());
				screen.displayMessage("Language: ");
				screen.displayMessageLine(dvd->getLanguage());
				screen.displayMessage("Content: ");
				screen.displayMessageLine(dvd->getType());
				screen.displayMessage("Genre: ");
				screen.displayMessageLine(dvd->getGenre());
				screen.displayMessage("Description: ");
				screen.displayMessageLine(dvd->getDesc());
				screen.displayMessage("Please confirm this is the right dvd. Y/N: ");
				choice = keyboard.getLine();
				if (choice == "Y") {
					dvd->setAvailable(pozitive);
					screen.displayMessage("Enter the date of returning: ");
					string returnDate = keyboard.getLine();
					dvd->setReturn(returnDate);
					screen.displayMessage("Return success! Would you like to return another item? Y/N: ");
					choice = keyboard.getLine();
				}

				else {
					screen.displayMessage("Would you like to return another item? Y/N: ");
					choice = keyboard.getLine();
				}

			}
			

		}
		else {
			screen.displayMessage("There was no match for the ID you entered. Would you like to try a new ID? Y/N: ");
			choice = keyboard.getLine();

		}

	}

}
