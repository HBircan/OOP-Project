#ifndef BOOK_H
#define BOOK_H
#include "Item.h"
#include <string>
using namespace std;

class Book : public Item {
private:
	long ISBN;
	string Author;
public:
	Book(int, string, int, string, string, bool, string, long, string);
	void setISBN(int);
	void setAuthor(string);
	int getISBN() const;
	string getAuthor() const;

};
#endif
