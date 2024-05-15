#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User
{
private:
	int UserID;
	string UserName;
	string Password;
	string Email;
	string ContactInfo;
	string AccessLevel;
	string Role;

public:
	User(int, string, string, string, string, string);
	bool ValidatePass(int) const;

	void setID(int);
	void setName(string);
	void setPassword(string);
	void setEmail(string);
	void setContact(string);
	void setAccess(string);
	void setRole(string);

	int getID() const;
	string getName() const;
	string getPassword() const;
	string getEmail() const;
	string getContact() const;
	string getAccess() const;
	string getRole() const;

};

#endif
