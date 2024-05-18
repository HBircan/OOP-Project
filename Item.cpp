#include <string>
#include "Item.h"
using namespace std;

Item::Item(int theItemID, string theItemName, int theReleaseDate, string theLanguage, string theDescription, bool theIfAvailable, string theGenre) {
	ItemID = theItemID;
	ItemName = theItemName;
	ReleaseDate = theReleaseDate;
	Language = theLanguage;
	Description = theDescription;
	IfAvailable = theIfAvailable;
	Genre = theGenre;
}
bool Item::IsAvailable() const {
	return IfAvailable;
}
int Item::getID() const {
	return ItemID;
}
string Item::getName() const {
	return ItemName;
}
int Item::getDate() const {
	return ReleaseDate;
}
string Item::getLanguage() const {
	return Language;
}
string Item::getDesc() const {
	return Description;
}
string Item::getGenre() const {
	return Genre;
}
string Item::getLend() const {
	return LendDate;
}
string Item::getReturn() const {
	return ReturnDate;
}
string Item::getDeadline() const {
	return Deadline;
}



//Modifiers
void Item::setID(int theItemID) {
	ItemID = theItemID;
}
void Item::setName(string theItemName) {
	ItemName = theItemName;
}
void Item::setDate(int theReleaseDate) {
	ReleaseDate = theReleaseDate;
}
void Item::setLanguage(string theLanguage) {
	Language = theLanguage;
}
void Item::setDesc(string theDescription) {
	Description = theDescription;
}
void Item::setAvailable(bool theIfAvailable) {
	IfAvailable = theIfAvailable;
}
void Item::setGenre(string theGenre) {
	Genre = theGenre;
}
void Item::setLend(string theDate){
	LendDate = theDate;
}
void Item::setReturn(string theDate) {
	ReturnDate = theDate;
}
void Item::setDeadline(string theDate) {
	Deadline = theDate;
}

