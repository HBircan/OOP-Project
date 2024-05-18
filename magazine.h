#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <string>

using namespace std;

class Magazine {
private:
    int IssueNum;
    string Publisher;

public:
    
    Magazine(int issueNum, const string& publisher);

    
    int getIssueNum() const;
    string getPublisher() const;

    
    void setIssueNum(int issueNum);
    void setPublisher(const std::string& publisher);
};

#endif // MAGAZINE_H
