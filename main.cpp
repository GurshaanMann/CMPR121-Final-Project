#include <iostream>
#include "PersonType.h"

using namespace std;

int main()
{
    PersonType user1;
    string firstName;
    string lastName;
    int number;
    
    cout << "Enter your first and last name";
    cin >> firstName >> lastName;
    cout << "Enter your SSN";
    cin >> number;
    
    user1.setPersonInfo(firstName, lastName, number);
    
    user1.printName();
    user1.printPersonInfo();
    user1.printSSN();

    return 0;
}
