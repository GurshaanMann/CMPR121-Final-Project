#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <string>
#include <iostream>

class PersonType
{
    //public interface
    public:
    
    //default constructor
    PersonType();
    
    //Overloaded constructor
    PersonType::PersonType(std::string userFirstName, std::string userLastName, int userSSN) : fName(userFirstName), lName(userLastName), SSN(userSSN) {}

    //Destructor
    ~PersonType();

    bool operator==(const PersonType& other) const;
    
    std::string getFirstName();
    std::string getLastName();
    int getSSN();
    
    void setPersonInfo(std::string userFirstName, std::string userLastName, int userSSN);
    
    //other functionality
    void printName();
    void printPersonInfo();
    void printSSN();
    
    private:
    std::string fName;
    std::string lName;
    int SSN;
    
};
#endif
