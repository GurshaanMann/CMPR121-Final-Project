#include "PersonType.h"


//default constructor
PersonType::PersonType()
{
    SSN = 0;
}

//Overloaded constructor
PersonType::PersonType(std::string userFirstName, std::string userLastName, int userSSN) : fName(userFirstName), lName(userLastName), SSN(userSSN) {}


//Destructor
PersonType::~PersonType()
{
    
}



std::string PersonType::getFirstName()
{
    return fName;
}
std::string PersonType::getLastName()
{
    return lName;
}
int PersonType::getSSN()
{
    return SSN;
}

void PersonType::setPersonInfo(std::string userFirstName, std::string userLastName, int userSSN)
{
    fName = userFirstName;
    lName = userLastName;
    SSN = userSSN;
}



//other functionality
void PersonType::printName()
{
    std::cout << lName << ", " << fName << std::endl;
}

void PersonType::printPersonInfo()
{
    
}

void PersonType::printSSN()
{
}
