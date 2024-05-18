#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;

class Item {
private:
	int ItemID;
	string ItemName;
	int ReleaseDate;
	string Language;
	string Description;
	bool IfAvailable;
	string Genre;
	string LendDate = "N/A";
	string ReturnDate = "N/A";
	string Deadline = "N/A";

public:
	Item(int, string, int, string, string, bool, string);

	bool IsAvailable() const;
	int getID() const;
	string getName() const;
	int getDate() const;
	string getLanguage() const;
	string getDesc() const;
	string getGenre() const;
	string getLend() const;
	string getReturn() const;
	string getDeadline() const;

	void setAvailable(bool);
	void setID(int);
	void setName(string);
	void setDate(int);
	void setLanguage(string);
	void setDesc(string);
	void setGenre(string);
	void setLend(string);
	void setReturn(string);
	void setDeadline(string);

};
#endif
