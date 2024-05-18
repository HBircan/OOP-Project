#ifndef DVD_H
#define DVD_H
#include "Item.h"
#include <string>
using namespace std;

class DVD : public Item {
private:
	string Type;
	int MinuteLenght;
	string Director;
public:
	DVD(int, string, int, string, string, bool, string, string, int, string);
	void setType(string);
	void setMinute(int);
	void setDirector(string);
	string getType() const;
	int getMinute() const;
	string getDirector() const;

};
#endif
