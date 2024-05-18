#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

class Item {
private:
    int ItemID;
    string ItemName;
    string ReleaseDate;
    string Language;
    string Description;
    bool IfAvailable;

public:
 
    Item(int id, const string& name, const string& releaseDate, const string& lang, const string& desc, bool available);

     
    ~Item();

    
    int getItemID() const;
    string getItemName() const;
    string getReleaseDate() const;
    string getLanguage() const;
    string getDescription() const;
    bool isAvailable() const;

   
    void setAvailable(bool available);
};

#endif
