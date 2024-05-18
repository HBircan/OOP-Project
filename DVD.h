#ifndef LIBRARYDVD_H
#define LIBRARYDVD_H

#include <string>

using namespace std;

class LibraryDVD {
private:
    string type;
    int minuteLength;
    string director;

public:
    LibraryDVD(const std::string& dvdType, int length, const std::string& dir);
    string getType() const;
    int getMinuteLength() const;
    string getDirector() const;
    void setType(const std::string& dvdType);
    void setMinuteLength(int length);
    void setDirector(const std::string& dir);
    void display() const;
};

#endif 

