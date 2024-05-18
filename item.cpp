#include <iostream>
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
  
    Item(int itemId, const string& itemName, const string& releaseDate, const string& language, const string& description, bool ifAvailable)
        : ItemID(itemId), ItemName(itemName), ReleaseDate(releaseDate), Language(language), Description(description), IfAvailable(ifAvailable) {}

    
    int getItemID() const {
        return ItemID;
    }

    string getItemName() const {
        return ItemName;
    }

    string getReleaseDate() const {
        return ReleaseDate;
    }

    string getLanguage() const {
        return Language;
    }

    string getDescription() const {
        return Description;
    }

    bool getIfAvailable() const {
        return IfAvailable;
    }


    void setItemID(int itemId) {
        ItemID = itemId;
    }

    void setItemName(const string& itemName) {
        ItemName = itemName;
    }

    void setReleaseDate(const string& releaseDate) {
        ReleaseDate = releaseDate;
    }

    void setLanguage(const string& language) {
        Language = language;
    }

    void setDescription(const string& description) {
        Description = description;
    }

    void setIfAvailable(bool ifAvailable) {
        IfAvailable = ifAvailable;
    }


    bool IsAvailable() const {
        return IfAvailable;
    }

  
    void displayItemDetails() const {
             cout << "Item ID: " << ItemID << "\n"
                  << "Item Name: " << ItemName << "\n"
                  << "Release Date: " << ReleaseDate << "\n"
                  << "Language: " << Language << "\n"
                  << "Description: " << Description << "\n"
                  << "Availability: " << (IfAvailable ? "Available" : "Not Available") << "\n";
    }
};

int main() {
  
    Item item1(504009, "Gerçek Özgürlük", "2023-10-20", "English", "A personal growth book by Doğan Cüceloğlu", true);

   
    item1.displayItemDetails();

   
    item1.setIfAvailable(false);


    if (item1.IsAvailable()) {
        cout << "This book is available.\n";
    } else {
        cout << "This book is not available.\n";
    }

    return 0;
}
