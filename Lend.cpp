#include <string>
#include "Lend.h"
#include "LibraryDatabase.h"
#include "Screen.h"
#include "Keyboard.h"
using namespace std;

Lend::Lend(int userID, Screen& theScreen, Keyboard& theKeyboard, LibraryDatabase& theLibraryDatabase) 
	: Action(userID, theScreen, theKeyboard, theLibraryDatabase)  {   }


void Lend::Execute() {
	LibraryDatabase& libraryDatabase = getLibraryDatabase();
	Screen& screen = getScreen();
	Keyboard& keyboard = getKeyboard();
	int userID = getID();
	bool negative = false;

	string choice = "Y";
	while (choice == "Y") {

			screen.displayMessage("\nEnter the ID of the item you want to borrow : ");
			int itemNumber = keyboard.getInteger();

			Book* book = libraryDatabase.getBook(itemNumber);
			Magazine* magazine = libraryDatabase.getMagazine(itemNumber);
			DVD* dvd = libraryDatabase.getDvd(itemNumber);

			string borrow = "Y";

			if (book != NULL) {
				screen.displayMessageLine("The book you want to borrow: ");
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

				if (book->IsAvailable() == true) {
					screen.displayMessage("\nThis book is available for lending. Would you like to borrow? Y/N: ");
					borrow = keyboard.getLine();
					if (borrow == "Y") {
						book->setAvailable(negative);
						screen.displayMessage("Enter the date of borrowing: ");
						string lendDate = keyboard.getLine();
						book->setLend(lendDate);
						screen.displayMessage("Allowed time of borrowing for the Roles: Faculty-6 weeks, Student-4 weeks, Public-2 weeks.\nEnter the deadline for returning:  ");
						string deadline = keyboard.getLine();
						book->setDeadline(deadline);
						screen.displayMessageLine("Lending complete!");
					}
					else {
						screen.displayMessage("Would you like to borrow a different item? Y/N: ");
						choice = keyboard.getLine();
							
					}					
						
				}
				if (book->IsAvailable() == false) {
					screen.displayMessage("\nThis book is NOT available for lending. Would you like to borrow a different item? Y/N: ");
					choice = keyboard.getLine();
				}

			}
			else if (magazine != NULL) {
				screen.displayMessageLine("The magazine you want to borrow: ");
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


				if (magazine->IsAvailable() == true) {
					screen.displayMessage("This magazine is available for lending. Would you like to borrow? Y/N: ");
					borrow = keyboard.getLine();
					if (borrow == "Y") {
						book->setAvailable(negative);
						screen.displayMessage("Enter the date of borrowing: ");
						string lendDate = keyboard.getLine();
						magazine->setLend(lendDate);
						screen.displayMessage("Allowed time of borrowing for the Roles: Faculty-6 weeks, Student-4 weeks, Public-2 weeks.\nEnter the deadline for returning:  ");
						string deadline = keyboard.getLine();
						magazine->setDeadline(deadline);
						screen.displayMessageLine("Lending complete!");
					}
					else {
						screen.displayMessage("Would you like to borrow a different item? Y/N: ");
						choice = keyboard.getLine();

					}

				}
				if (magazine->IsAvailable() == false) {
					screen.displayMessage("This magazine is NOT available for lending. Would you like to borrow a different item? Y/N: ");
					choice = keyboard.getLine();

				}


			}
			else if (dvd != NULL) {
				screen.displayMessageLine("The DVD you want to borrow: ");
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

				if (dvd->IsAvailable() == true) {
					screen.displayMessage("This DVD is available for lending. Would you like to borrow? Y/N: ");
					borrow = keyboard.getLine();
					if (borrow == "Y") {
						book->setAvailable(negative);
						screen.displayMessage("Enter the date of borrowing: ");
						string lendDate = keyboard.getLine();
						dvd->setLend(lendDate);
						screen.displayMessage("Allowed time of borrowing for the Roles: Faculty-6 weeks, Student-4 weeks, Public-2 weeks.\nEnter the deadline for returning:  ");
						string deadline = keyboard.getLine();
						dvd->setDeadline(deadline);
						screen.displayMessageLine("Lending complete!");
					}
					else {
						screen.displayMessage("Would you like to borrow a different item? Y/N: ");
						choice = keyboard.getLine();						
					}
				}
				if (dvd->IsAvailable() == false) {
					screen.displayMessage("This DVD is NOT available for lending. Would you like to borrow a different item? Y/N: ");
					choice = keyboard.getLine();

				}

			}
			else {
				screen.displayMessage("There was no match for the ID you entered. Would you like to try a new ID? Y/N: ");
				choice = keyboard.getLine();

			}
	}

	screen.displayMessage("The lending was terminated.");
		
}
