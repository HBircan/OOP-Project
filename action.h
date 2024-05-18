#ifndef ACTION_H
#define ACTION_H
#include <string>

using namespace std;

class Action {
private:
    int UserID;
    string AccessLevel;
    string Role;
    string ItemID;

public:
 
    Action(int userID, const string& accessLevel, const string& role, const string& itemID);

    
    int getUserID() const;
    string getAccessLevel() const;
    string getRole() const;
    string getItemID() const;

    
    void setUserID(int userID);
    void setAccessLevel(const string& accessLevel);
    void setRole(const string& role);
    void setItemID(const string& itemID);

    
};

#endif
