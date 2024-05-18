#include "DVD.h"
#include <string>
using namespace std;


DVD::DVD(int theItemID, string theItemName, int theReleaseDate, string theLanguage, string theDescription, bool theIfAvailable, string theGenre, string theType, int theMinute, string theDirector) : Item(theItemID, theItemName, theReleaseDate, theLanguage, theDescription, theIfAvailable, theGenre){
	Type = theType;
	MinuteLenght = theMinute;
	Director = theDirector;
}

void DVD::setType(string theType) {
	Type = theType;
}

void DVD::setMinute(int theMinute) {
	MinuteLenght = theMinute;
}

void DVD::setDirector(string theDirector) {
	Director = theDirector;
}

string DVD::getType() const {
	return Type;
}

int DVD::getMinute() const {
	return MinuteLenght;
}

string DVD::getDirector() const {
	return Director;
}
