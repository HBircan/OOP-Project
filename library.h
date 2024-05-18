#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>

using namespace std;

class Library {
private:
    bool UserAuthen;
    string Name;
    string Location;

public:
   
    Library();
    Library(const string& name, const string& location, bool userAuthen = false);

    
    bool getUserAuthen() const;
    string getName() const;
    string getLocation() const;
 
    void setUserAuthen(bool userAuthen);
    void setName(const string& name);
    void setLocation(const string& location);

   
};

#endif // LIBRARY_H
