#ifndef LIBRARY_DATABASE_H
#define LIBRARY_DATABASE_H
#include "User.h"
#include "Book.h"
#include "Magazine.h"
#include "DVD.h"
#include <vector>
#include <string>
using namespace std;

class LibraryDatabase
{
private:
	vector< User > accounts;
	vector< Book > books; 
	vector< Magazine > magazines; 
	vector< DVD > dvds; 

	User* getAccount(int); // get pointer to Account object

public:
	LibraryDatabase(); // constructor initializes accounts

	// determine whether account number and PIN match those of an Account
	bool authenticateUser(int, string); // returns true if Account authentic

	Book* getBook(int);
	Magazine* getMagazine(int);
	DVD* getDvd(int);

}; 
#endif 
