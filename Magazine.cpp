#include "Magazine.h"
#include <string>
using namespace std;


Magazine::Magazine(int theItemID, string theItemName, int theReleaseDate, string theLanguage, string theDescription, bool theIfAvailable, string theGenre, int theIssueNum, string thePublisher) : Item(theItemID, theItemName, theReleaseDate, theLanguage, theDescription, theIfAvailable, theGenre) {
	IssueNum = theIssueNum;
	Publisher = thePublisher;
}

void Magazine::setIssue(int theIssueNum) {
	IssueNum = theIssueNum;
}

void Magazine::setPublisher(string thePublisher) {
	Publisher = thePublisher;
}

int Magazine::getIssue() const {
	return IssueNum;
}

string Magazine::getPublisher() const {
	return Publisher;
}
