#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <string>

using namespace std;

class LibraryBook {
private:
    int ISBN;
    string author;

public:
    LibraryBook(int isbn, const std::string& auth);
    int getISBN() const;
    string getAuthor() const;
    void setISBN(int isbn);
    void setAuthor(const std::string& auth);
    void display() const;
};

#endif 

