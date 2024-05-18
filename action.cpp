#include "Action.h"
using namespace std;
 
Action::Action(int userId, const string& accessLevel, const string& role, const string& itemId)
    : UserID(userId), AccessLevel(accessLevel), Role(role), ItemID(itemId) {}

 
int Action::getUserID() const {
    return UserID;
}

 string Action::getAccessLevel() const {
    return AccessLevel;
}

 string Action::getRole() const {
    return Role;
}

 string Action::getItemID() const {
    return ItemID;
}

 
void Action::setUserID(int userId) {
    UserID = userId;
}

void Action:: setAccessLevel (const {
}

void Action::setRole(const string& role) {
    Role = role;
}

void Action::setItemID(const string& itemId) {
    ItemID = itemId;
}
