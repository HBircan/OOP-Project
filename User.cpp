#include <string>
#include <vector>
#include "User.h"
using namespace std;

User::User (int theUserID, string theUsername, string thePassword, string theEmail, string theContactInfo, string theAccessLevel, string theRole) {
	UserID = theUserID;
	Username = theUsername;
	Password = thePassword;
	Email = theEmail;
	ContactInfo = theContactInfo;
	AccessLevel = theAccessLevel;
	Role = theRole;
}

bool User::ValidatePass(string userPassword) const {
	if (userPassword == Password)
		return true;
	else
		return false;
}

//Modifiers

void  User::setID(int theUserID) {
	theUserID = UserID;
}

void  User::setName(string theUsername) {
	Username = theUsername;
}

void  User::setPassword(string thePassword) {
	Password = thePassword;
}

void  User::setEmail(string theEmail) {
	Email = theEmail;
}

void  User::setContact(string theContactInfo) {
	ContactInfo = theContactInfo;
}

void  User::setAccess(string theAccessLevel) {
	AccessLevel = theAccessLevel;
}

void  User::setRole(string theRole) {
	Role = theRole;
}
//Accessors

int  User::getID() const {
	return UserID;
}

string  User::getName() const{
	return Username;
}

string  User::getPassword() const{
	return Password;
}

string  User::getEmail() const{
	return Email;
}

string  User::getContact() const{
	return ContactInfo;
}

string  User::getAccess() const{
	return AccessLevel;
}

string  User::getRole() const{
	return Role;
}
