/*
    Name header
 */
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

    std::string getFirstName() const;
    std::string getLastName() const;
    int getSSN() const;

    void setPersonInfo(std::string userFirstName, std::string userLastName, int userSSN);


    //other functionality

    void printName() const;
    void printPersonInfo();
    void printSSN();


private:
    std::string fName;
    std::string lName;
    int SSN;

};
#endif
