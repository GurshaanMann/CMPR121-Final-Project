#include "PersonType.h"


//default constructor
PersonType::PersonType()
{
    SSN = 0;
}

//Overloaded constructor

//Destructor
PersonType::~PersonType()
{
    
}

//getters or accessors
std::string PersonType::getFirstName()
{
    return fName;
}
std::string PersonType::getLastName()
{
    return iName;
}
int PersonType::getSSN()
{
    return SSN;
}

//setters or mutators
void PersonType::setPersonInfo(std::string firstName, std::string lastName, int newSSN);
{
    fName = firstName;
    iName = lastName;
    SSN = newSSN;
}


//other functionality
void PersonType::printName()
{
  
}

void PersonType::printPersonInfo()
{
    
}

void PersonType::printSSN()
{
    
}
