#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H
#include "PersonType.h"
#include <string>
#include <iostream>
#include <iomanip>

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType
{
    //public interface
public:

    //default constructor
    CandidateType();

    //Overloaded constructor
    //CandidateType(std::string userFirstName, std::string userLastName, int userSSN);

    //Destructor
    ~CandidateType();

    

    //void setPersonInfo(std::string userFirstName, std::string userLastName, int userSSN);

    //accessors
    

    //other functionality
    int updateVotesByCampus(const int NUM_OF_CAMPUSES, int totalVotes);

    int getTotalVotes();
    int getVotesByCampus();
    void printCandidateInfo();
    void printTotalCandidateVotes();
    void printCandidateCampusVotes(const int NUM_OF_CAMPUSES);


private:
    
    int totalVotes;
    int array[NUM_OF_CAMPUSES] = {1,2,3,4};
    struct College
    {
        std::string name
    };


};
#endif

