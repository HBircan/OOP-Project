#include "LibraryBook.h"
#include <iostream>

using namespace std;

LibraryBook::LibraryBook(int isbn, const string& auth) : ISBN(isbn), author(auth) {}

int LibraryBook::getISBN() const {
    return ISBN;
}

string LibraryBook::getAuthor() const {
    return author;
}

void LibraryBook::setISBN(int isbn) {
    ISBN = isbn;
}

void LibraryBook::setAuthor(const string& auth) {
    author = auth;
}

void LibraryBook::display() const {
    cout << "ISBN: " << ISBN << endl;
    cout << "Author: " << author << endl;
}

