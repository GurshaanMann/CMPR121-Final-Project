/*
 
 Gurshaan Maan, Muhammad Jafri, Giovanni Flores, Braiden Nagele

 CMPR 121 - SPRING 2024
 June 2 2024

 Final Project Submission
 
 Collaborations: Youtube, class notes, chatgpt, Professor Alweheiby
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
    PersonType(std::string userFirstName, std::string userLastName, int userSSN); //updates private variables with parameter

    //Destructor
    ~PersonType();

    std::string getFirstName() const; //returns first name
    std::string getLastName() const;  //returns last name
    int getSSN() const; //returns SSN

    void setPersonInfo(std::string userFirstName, std::string userLastName, int userSSN); //updates private variables


    //other functionality

    void printName() const; //prints candidates name
    void printPersonInfo() const; //formats candidates SSN with dashes and then prints it
    void printSSN() const; //prints candidates SSN & name


private:
    std::string fName; //first name
    std::string lName; //last name
    int SSN; 

};
#endif
