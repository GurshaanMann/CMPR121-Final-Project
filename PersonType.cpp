#include "PersonType.h"

//default constructor
PersonType::PersonType() 
{
    SSN = 0;
}

//Overloaded constructor
PersonType::PersonType(std::string userFirstName, std::string userLastName, int userSSN)
{
    fName = userFirstName;
    lName = userLastName;
    SSN = userSSN;
}


//Destructor
PersonType::~PersonType()
{

}

std::string PersonType::getFirstName() const
{
    return fName;
}
std::string PersonType::getLastName() const
{
    return lName;
}
int PersonType::getSSN() const
{
    return SSN;
}

void PersonType::setPersonInfo(std::string userFirstName, std::string userLastName, int userSSN) //updates private variables
{
    fName = userFirstName;
    lName = userLastName;
    SSN = userSSN;
}



//other functionality
void PersonType::printName() const{ 
    std::cout << lName << ", " << fName << std::endl;
}

void PersonType::printSSN() {
    std::string ssnFormat = std::to_string(SSN);
    ssnFormat = ssnFormat.substr(0,3) + "-" + ssnFormat.substr(3,2) + "-" + ssnFormat.substr(5);
    std::cout << ssnFormat;
}
void PersonType::printPersonInfo() {
    printSSN();
    std::cout << " " << fName << " " << lName << std::endl;
}
