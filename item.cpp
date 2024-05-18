#include "Item.h"
using namespace std;

Item::Item(int id, const string& name, const string& releaseDate, const string& lang, const  string& desc, bool available)
    : ItemID(id), ItemName(name), ReleaseDate(releaseDate), Language(lang), Description(desc), IfAvailable(available) {}

Item::~Item() {}

int Item::getItemID() const {
    return ItemID;
}

 string Item::getItemName() const {
    return ItemName;
}

 string Item::getReleaseDate() const {
    return ReleaseDate;
}

 string Item::getLanguage() const {
    return Language;
}

 string Item::getDescription() const {
    return Description;
}

bool Item::isAvailable() const {
    return IfAvailable;
}

void Item::setAvailable(bool available) {
    IfAvailable = available;
}
