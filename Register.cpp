#include <string>
#include "Register.h"
#include "LibraryDatabase.h"
#include "Screen.h"
#include "Keyboard.h"
using namespace std;

Register::Register(int theuserID, Screen& theScreen, Keyboard& theKeyboard, LibraryDatabase& theLibraryDatabase)
	: Action(theuserID, theScreen, theKeyboard, theLibraryDatabase) {   }

void Register::Execute() {
	int userID = getID();
	LibraryDatabase& libraryDatabase = getLibraryDatabase();
	Screen& screen = getScreen();
	Keyboard& keyboard = getKeyboard();

	string choice = "Y";
	while (choice == "Y") {

		int Access = userID;
		while (Access >= 10)
			Access /= 10;

		if (Access==1) {
			screen.displayMessage("Enter 1 if you want to register a new item. Enter 2 if you want to register a new member: ");
			int reg = keyboard.getInteger();

			if (reg == 1) {
				screen.displayMessage("Choose which item you are registering. Enter 1 for Book, 2 for Magazine, 3 for DVD: ");
				int item = keyboard.getInteger();
				screen.displayMessageLine("Enter the information for the item you want to register without spaces: ");

				screen.displayMessage("ID: ");
				int newID = keyboard.getInteger();
				screen.displayMessage("Name: ");
				string newName = keyboard.getLine();
				screen.displayMessage("Release Year: ");
				int newDate = keyboard.getInteger();
				screen.displayMessage("Language: ");
				string newLanguage = keyboard.getLine();
				screen.displayMessage("Genre: ");
				string newGenre = keyboard.getLine();
				screen.displayMessage("Description: ");
				string newDesc = keyboard.getLine();

				string newAuthor;
				long newISBN;
				int newIssue;
				string newPublisher;
				string newType;
				int newMin;
				string newDirector;

				if (item == 1) {

					screen.displayMessage("Author: ");
					newAuthor = keyboard.getLine();
					screen.displayMessage("ISBN: ");
					newISBN = keyboard.getLongInteger();
					Book newBook(newID, newName, newDate, newLanguage, newDesc, true, newGenre, newISBN, newAuthor);
					screen.displayMessage("\nID:");
					screen.displayNumberLine(newBook.getID());
					screen.displayMessage("Name: ");
					screen.displayMessageLine(newBook.getName());
					screen.displayMessage("Author: ");
					screen.displayMessageLine(newBook.getAuthor());
					screen.displayMessage("ISBN: ");
					screen.displayLongNumberLine(newBook.getISBN());
					screen.displayMessage("Release year: ");
					screen.displayNumberLine(newBook.getDate());
					screen.displayMessage("Language: ");
					screen.displayMessageLine(newBook.getLanguage());
					screen.displayMessage("Genre: ");
					screen.displayMessageLine(newBook.getGenre());
					screen.displayMessage("Description: ");
					screen.displayMessageLine(newBook.getDesc());
					screen.displayMessageLine("Confirm the book you want to register. Y/N: ");
					choice = keyboard.getLine();
					if (choice == "Y") {
						screen.displayMessageLine("Registration complete!");
						screen.displayMessage("Would you like to continue with another registration? Y/N:");
						choice = keyboard.getLine();
					}
					else {
						screen.displayMessageLine("Registration terminated.");
						break;
					}
				}
				else if (item == 2) {
					screen.displayMessage("Publisher: ");
					newPublisher = keyboard.getLine();
					screen.displayMessage("Issue Number: ");
					newIssue = keyboard.getInteger();
					Magazine newMagazine(newID, newName, newDate, newLanguage, newDesc, true, newGenre, newIssue, newPublisher);
					screen.displayMessage("\nID:");
					screen.displayNumberLine(newMagazine.getID());
					screen.displayMessage("Name: ");
					screen.displayMessageLine(newMagazine.getName());
					screen.displayMessage("Publisher: ");
					screen.displayMessageLine(newMagazine.getPublisher());
					screen.displayMessage("Issue Number: ");
					screen.displayNumberLine(newMagazine.getIssue());
					screen.displayMessage("Release year: ");
					screen.displayNumberLine(newMagazine.getDate());
					screen.displayMessage("Language: ");
					screen.displayMessageLine(newMagazine.getLanguage());
					screen.displayMessage("Genre: ");
					screen.displayMessageLine(newMagazine.getGenre());
					screen.displayMessage("Description: ");
					screen.displayMessageLine(newMagazine.getDesc());
					screen.displayMessageLine("Confirm the magazine you want to register. Y/N: ");
					choice = keyboard.getLine();
					if (choice == "Y") {
						screen.displayMessageLine("Registration complete!");
						screen.displayMessage("Would you like to continue with another registration? Y/N:");
						choice = keyboard.getLine();
					}
					else {
						screen.displayMessageLine("Registration terminated.");
						break;
					}
				}

				else if (item == 3) {
					screen.displayMessage("Director: ");
					newDirector = keyboard.getLine();
					screen.displayMessage("Content: ");
					newType = keyboard.getLine();
					screen.displayMessage("Minutes: ");
					newMin = keyboard.getInteger();
					DVD newDvd(newID, newName, newDate, newLanguage, newDesc, true, newGenre, newType, newMin, newDirector);
					screen.displayMessage("\nID:");
					screen.displayNumberLine(newDvd.getID());
					screen.displayMessage("Name: ");
					screen.displayMessageLine(newDvd.getName());
					screen.displayMessage("Director: ");
					screen.displayMessageLine(newDvd.getDirector());
					screen.displayMessage("Minutes: ");
					screen.displayLongNumberLine(newDvd.getMinute());
					screen.displayMessage("Release year: ");
					screen.displayNumberLine(newDvd.getDate());
					screen.displayMessage("Language: ");
					screen.displayMessageLine(newDvd.getLanguage());
					screen.displayMessage("Content: ");
					screen.displayMessageLine(newDvd.getType());
					screen.displayMessage("Genre: ");
					screen.displayMessageLine(newDvd.getGenre());
					screen.displayMessage("Description: ");
					screen.displayMessageLine(newDvd.getDesc());
					screen.displayMessageLine("Confirm the DVD you want to register. Y/N: ");
					choice = keyboard.getLine();
					if (choice == "Y") {
						screen.displayMessageLine("Registration complete!");
						screen.displayMessage("Would you like to continue with another registration? Y/N:");
						choice = keyboard.getLine();
					}
					else {
						screen.displayMessageLine("Registration terminated.");
						break;
					}
				}

				else {
					screen.displayMessageLine("Your Access Level does not allow you to register an item.");

				}
			}
			else if (reg == 2) {
				screen.displayMessageLine("Enter the information for the new member registration without spaces: ");

				screen.displayMessage("ID: ");
				int newID = keyboard.getInteger();
				screen.displayMessage("Name: ");
				string newMemberName = keyboard.getLine();
				screen.displayMessage("Email: ");
				string newEmail = keyboard.getLine();
				screen.displayMessage("Contact Information: ");
				string newContact = keyboard.getLine();
				screen.displayMessage("Enter 1 for Faculty role, 2 for Student role, 3 for Public role: ");
				int roleNum = keyboard.getInteger();
				screen.displayMessage("Password: ");
				string newPass = keyboard.getLine();
				string newAccess;
				string newRole;
				if (roleNum == 1) {
					newRole = "Faculty";
					newAccess = "Level-1";
				}
				else if (roleNum == 2) {
					newRole = "Student";
					newAccess = "Level-2";
				}
				else if (roleNum == 3) {
					newRole = "Public";
					newAccess = "Level-3";
				}
				else {
					screen.displayMessageLine("Invalid role. Registration terminated.");
					break;
				}
				User newUser(newID, newMemberName, newPass, newEmail, newContact, newAccess, newRole);
				screen.displayMessage("\nID:");
				screen.displayNumberLine(newUser.getID());
				screen.displayMessage("Name: ");
				screen.displayMessageLine(newUser.getName());
				screen.displayMessage("Password:");
				screen.displayMessageLine(newUser.getPassword());
				screen.displayMessage("Email: ");
				screen.displayMessageLine(newUser.getEmail());
				screen.displayMessage("Contact Information: ");
				screen.displayMessageLine(newUser.getContact());
				screen.displayMessage("Access Level: ");
				screen.displayMessageLine(newUser.getAccess());
				screen.displayMessage("Role: ");
				screen.displayMessageLine(newUser.getRole());
				screen.displayMessageLine("Confirm the member you want to register. Y/N: ");
				choice = keyboard.getLine();
				if (choice == "Y") {
					screen.displayMessageLine("Registration complete!");
					screen.displayMessage("Would you like to continue with another registration? Y/N:");
					choice = keyboard.getLine();
				}
				else {
					screen.displayMessageLine("Registration terminated.");
					break;
				}
			}

		}
		else {
			screen.displayMessageLine("Your Access Level does not allow you to register.");
			break;
		}
		
	}
}
