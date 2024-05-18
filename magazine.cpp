#include <iostream>
#include <string>
using namespace std;

class Magazine {
private:
    int IssueNum;
    string Publisher;

public:
   
    Magazine(int issueNum, const string& publisher)
        : IssueNum(issueNum), Publisher(publisher) {}

   
    int getIssueNum() const {
        return IssueNum;
    }

    string getPublisher() const {
        return Publisher;
    }

 
    void setIssueNum(int issueNum) {
        IssueNum = issueNum;
    }

    void setPublisher(const string& publisher) {
        Publisher = publisher;
    }

   
    void displayMagazineDetails() const {
        cout << "Issue Number: " << IssueNum << "\n"
                  << "Publisher: " << Publisher << "\n";
    }
};

int main() {
  
    Magazine magazine1(221504, "Vogue");


    magazine1.displayMagazineDetails();

    
    magazine1.setIssueNum(2106);
    magazine1.setPublisher("Condé Nast");

    
    magazine1.displayMagazineDetails();

    return 0;
}
