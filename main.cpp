#include "PersonType.h"
#include "CandidateType.h"

using namespace std;

int main()
{
    PersonType user1;
    CandidateType user2;
    string firstName;
    string lastName;
    int SSN;
    int campusNumber;
    int votesCasted;
    
    cout << "Enter your first and last name: ";
    cin >> firstName >> lastName;
    cout << "Enter your SSN: ";
    cin >> SSN;

    user1.setPersonInfo(firstName, lastName, SSN);
    user2.setPersonInfo(firstName, lastName, SSN);

    user1.printName();
    user1.printPersonInfo();
    cout << "---------------\nPart B:\n";
    cout << "Enter Campus Number and amount of votes you want to cast: ";
    cin >> campusNumber >> votesCasted;
    user2.updateVotesByCampus(campusNumber, votesCasted); //updates by adding votes to campus
    cout << endl << endl;
    user2.printCandidateCampusVotes(campusNumber); //prints how many votes the campus has
    cout << endl << endl;
    user2.printCandidateTotalVotes(); //prints total votes
    cout << endl;
    user2.printCandidateInfo();
    
    return 0;
}
