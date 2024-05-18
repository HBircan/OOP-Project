#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "Item.h"
#include <string>
using namespace std;

class Magazine : public Item {
private:
	int IssueNum;
	string Publisher;
public:
	Magazine(int, string, int, string, string, bool, string, int, string);
	void setIssue(int);
	void setPublisher(string);
	int getIssue() const;
	string getPublisher() const;

};
#endif
