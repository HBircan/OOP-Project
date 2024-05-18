#include "LibraryDVD.h"
#include <iostream>

using namespace std;

LibraryDVD::LibraryDVD(const string& dvdType, int length, const string& dir) : type(dvdType), minuteLength(length), director(dir) {}

string LibraryDVD::getType() const {
    return type;
}

int LibraryDVD::getMinuteLength() const {
    return minuteLength;
}

string LibraryDVD::getDirector() const {
    return director;
}

void LibraryDVD::setType(const string& dvdType) {
    type = dvdType;
}

void LibraryDVD::setMinuteLength(int length) {
    minuteLength = length;
}

void LibraryDVD::setDirector(const string& dir) {
    director = dir;
}

void LibraryDVD::display() const {
    cout << "Type: " << type << endl;
    cout << "Minute Length: " << minuteLength << endl;
    cout << "Director: " << director << endl;
}

