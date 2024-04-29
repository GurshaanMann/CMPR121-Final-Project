#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <string>
#include <iostream>
#include <iomanip>

class PersonType
{
    //public interface
public:

    //default constructor
    PersonType();

    //Overloaded constructor
    PersonType(std::string userFirstName, std::string userLastName, int userSSN);

    //Destructor
    ~PersonType();

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
