#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    bool UserAuthen;
    string Name;
    string Location;

public:
    
    Library(const string& name, const string& location)
        : UserAuthen(false), Name(name), Location(location) {}

    
    bool isUserAuthenticated() const {
        return UserAuthen;
    }

    string getName() const {
        return Name;
    }

    string getLocation() const {
        return Location;
    }

    
    void setUserAuthen(bool userAuthen) {
        UserAuthen = userAuthen;
    }

    void setName(const string& name) {
        Name = name;
    }

    void setLocation(const string& location) {
        Location = location;
    }

   
    void displayLibraryDetails() const {
             cout << "Library Name: " << Name << "\n"
                  << "Location: " << Location << "\n"
                  << "User Authentication Status: " << (UserAuthen ? "Authenticated" : "Not Authenticated") << "\n";
    }
};

int main() {
    
    Library library("The British Library", "United Kingdom");

    
    library.displayLibraryDetails(); 

    
    library.setUserAuthen(true);
    library.setName("Shanghai Library");
    library.setLocation(" China");

    
    library.displayLibraryDetails();

    return 0;
}
