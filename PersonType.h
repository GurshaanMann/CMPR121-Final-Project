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
    PersonType(std::string userFirstName, std::string userLastName, int userSSN);

    //Destructor
    ~PersonType();

    bool operator==(const PersonType& other) const;

    std::string getFirstName();
    std::string getLastName();
    int getSSN();

    void setPersonInfo(std::string userFirstName, std::string userLastName, int userSSN);

    void printName() const;

    //other functionality

    void printName();
    void printPersonInfo() const;
    void printPersonInfo();
    void printSSN();

    void printSSN() const;

private:
    std::string fName;
    std::string lName;
    int SSN;

};
#endif
