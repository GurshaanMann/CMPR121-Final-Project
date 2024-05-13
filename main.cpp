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
    int campus;
    int votesPlaced;
    
    cout << "Enter your first and last name: ";
    cin >> firstName >> lastName;
    cout << "Enter your SSN: ";
    cin >> SSN;

    user1.setPersonInfo(firstName, lastName, SSN);
    user2.setPersonInfo(firstName, lastName, SSN);

    user1.printName();
    user1.printPersonInfo();
    cout << "---------------\nPart B:\n";
    
    cout << "Enter the campus number and then enter amount of votes you want to place.\n1.Santiago Canyon College, 2. Santa Ana College, 3. Orange Coast College, 4. Coastline Community College.\n";
    cin >> campus >> votesPlaced;
    
    user2.updateVotesByCampus(campus, votesPlaced); //updates by adding votes to campus
        cout << endl << endl;
        user2.printCandidateCampusVotes(campus); //prints how many votes the campus has
        cout << endl << endl;
        user2.printCandidateTotalVotes(); //prints total votes
        cout << endl << endl;
        user2.printCandidateInfo(); //prints candidate SSN formatted, first last name
    return 0;
}
