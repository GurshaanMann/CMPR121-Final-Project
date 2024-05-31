/*
 
 Gurshaan Maan, Muhammad Jafri, Giovanni Flores, Braiden Nagele

 CMPR 121 - SPRING 2024
 June 2 2024

 Final Project Submission
 
 Collaborations: Youtube, class notes, chatgpt, Professor Alweheiby
*/
#include "PersonType.h"

//default constructor
PersonType::PersonType() 
{
    SSN = 0; //initialize SSN
}

//Overloaded constructor
PersonType::PersonType(std::string userFirstName, std::string userLastName, int userSSN)  //updates private variables with parameter
{
    fName = userFirstName;
    lName = userLastName;
    SSN = userSSN;
}


//Destructor
PersonType::~PersonType()
{

}

std::string PersonType::getFirstName() const //returns first name
{
    return fName;
}
std::string PersonType::getLastName() const //returns last name
{
    return lName;
}
int PersonType::getSSN() const //returns SSN
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
void PersonType::printName() const //prints candidates name
{
    std::cout << lName << ", " << fName << std::endl;
}

void PersonType::printSSN() const //formats candidates SSN with dashes and then prints it
{
    std::string ssnFormat = std::to_string(SSN); //converts int to string
    ssnFormat = ssnFormat.substr(0,3) + "-" + ssnFormat.substr(3,2) + "-" + ssnFormat.substr(5); //formats SSN with dashes
    std::cout << ssnFormat;
}
void PersonType::printPersonInfo() const //prints candidates SSN & name
{
    printSSN();
    std::cout << " " << fName << " " << lName << std::endl;
}
