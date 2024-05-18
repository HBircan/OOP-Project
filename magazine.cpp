#include "Magazine.h"
using namespace std;
 
Magazine::Magazine(int issueNum, const string& publisher)
    : IssueNum(issueNum), Publisher(publisher) {}

 
int Magazine::getIssueNum() const {
    return IssueNum;
}

string Magazine::getPublisher() const {
    return Publisher;
}

 
void Magazine::setIssueNum(int issueNum) {
    IssueNum = issueNum;
}

void Magazine::setPublisher(const string& publisher) {
    Publisher = publisher;
}
