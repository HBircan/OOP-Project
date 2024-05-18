#include "Book.h"
#include <string>
using namespace std;


Book::Book(int theItemID, string theItemName, int theReleaseDate, string theLanguage, string theDescription, bool theIfAvailable, string theGenre, long theISBN, string theAuthor) : Item(theItemID, theItemName, theReleaseDate, theLanguage, theDescription, theIfAvailable, theGenre) {
	ISBN = theISBN;
	Author = theAuthor;
}

void Book::setISBN(int theISBN) {
	ISBN = theISBN;
}

void Book::setAuthor(string theAuthor) {
	Author = theAuthor;
}

int Book::getISBN() const {
	return ISBN;
}

string Book::getAuthor() const {
	return Author;
}
