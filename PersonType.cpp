#include "PersonType.h"
#include <iomanip>

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

bool PersonType::operator==(const PersonType& other) const
{
    return false;
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
void PersonType::printName(){
    std::cout << lName << ", " << fName << std::endl;
}

void PersonType::printPersonInfo() {
    
    std::cout << fName << " " << lName << std::endl;
}



void PersonType::printSSN() {
    std::cout << std::setw(3) << std::setfill('0') << (SSN / 1000000) << "-"
        << std::setw(2) << std::setfill('0') << (SSN / 10000) % 100 << "-"
        << std::setw(4) << std::setfill('0') << SSN % 10000 << std::endl;
}
