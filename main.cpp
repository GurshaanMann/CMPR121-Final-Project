#include <iostream>
#include "PersonType.h"

using namespace std;

int main()
{
    PersonType user1;
    string firstName;
    string lastName;
    int SSN;

    cout << "Enter your first and last name";
    cin >> firstName >> lastName;
    cout << "Enter your SSN";
    cin >> SSN;

    user1.setPersonInfo(firstName, lastName, SSN);

    user1.printName();
    user1.printPersonInfo();
    user1.printSSN();

    return 0;
}
