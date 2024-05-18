#include <iostream>
#include <string>
using namespace std; 

class Action {
private:
    int UserID;
    string AccessLevel;
    string Role;
    string ItemID;

public:
    
    Action(int userId, const string& accessLevel, const string& role, const string& itemId)
    : UserID(userId), AccessLevel(accessLevel), Role(role), ItemID(itemId) {}

    
    int getUserID() const {
        return UserID;
    }

    string getAccessLevel() const {
        return AccessLevel;
    }

    string getRole() const {
        return Role;
    }

    string getItemID() const {
        return ItemID;
    }

    
    void setUserID(int userId) {
        UserID = userId;
    }

    void setAccessLevel(const string& accessLevel) {
        AccessLevel = accessLevel;
    }

    void setRole(const string& role) {
        Role = role;
    }

    void setItemID(const string& itemId) {
        ItemID = itemId;
    }

   
    void displayActionDetails() const {
        cout << "User ID: " << UserID << "\n"
             << "Access Level: " << AccessLevel << "\n"
             << "Role: " << Role << "\n"
             << "Item ID: " << ItemID << "\n";
    }
};

int main() {
    
    Action action1(221504009, "cmr", "Librarian", "Book009");


    action1.displayActionDetails();

    
    action1.setAccessLevel("50409");
    action1.setRole("Student");
    action1.setItemID("504009");

 
    action1.displayActionDetails();

    return 0;
}
