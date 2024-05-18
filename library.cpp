#include "Library.h"
using namespace std;

 
Library::Library() : UserAuthen(false), Name("The British Library"), Location("United Kingdom") {}

Library::Library(const string& name, const string& location, bool userAuthen) 
    : UserAuthen(userAuthen), Name(name), Location(location) {}

 
bool Library::getUserAuthen() const {
    return UserAuthen;
}

string Library::getName() const {
    return Name;
}

string Library::getLocation() const {
    return Location;
}


void Library::setUserAuthen(bool userAuthen) {
    UserAuthen = userAuthen;
}

void Library::setName(const string& name) {
    Name = name;
}

void Library::setLocation(const string& location) {
    Location = location;
}

 
