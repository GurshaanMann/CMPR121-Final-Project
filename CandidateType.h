#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H
#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType
{
    //public interface
public:

    //default constructor
    CandidateType();    

    //other functionality
    void updateVotesByCampus(const int campusNumber, int totalVotesOfCampus);

    int getTotalVotes() const;
    int getVotesByCampus(const int campusNumber);
    void printCandidateInfo();
    void printCandidateTotalVotes() const;
    void printCandidateCampusVotes(const int NUM_OF_CAMPUSES);
    
    //Destructor
    ~CandidateType();

private:
    
    int totalVotes;
    int array[NUM_OF_CAMPUSES] = {1,2,3,4};


};
#endif
