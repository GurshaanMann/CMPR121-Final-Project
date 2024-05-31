/*
 
 Gurshaan Maan, Muhammad Jafri, Giovanni Flores, Braiden Nagele

 CMPR 121 - SPRING 2024
 June 2 2024

 Final Project Submission
 
 Collaborations: https://www.youtube.com/watch?v=RNMIDj62o_o&t=955s, https://www.youtube.com/watch?v=HKfj0l7ndbc, https://www.youtube.com/watch?v=rJlJ8qqVm3k, class notes, chatgpt, Professor Alweheiby
*/
#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H
#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4; //amount of campuses

class CandidateType : public PersonType
{
public:

    //default constructor
    CandidateType(); //constructor

    //other functionality
    void updateVotesByCampus(const int campusNumber, int totalVotesOfCampus);//Takes in campus number and votes placed for campus updates campus total & total for all campuses.

    int getTotalVotes() const; //returns totalVotes;
    int getVotesByCampus(const int campusNumber); //returns total votes for campus
    void printCandidateInfo(); //prints SSN, First & last name
    void printCandidateTotalVotes() const; //prints name and how many votes they got from all the campuses
    void printCandidateCampusVotes(const int NUM_OF_CAMPUSES) const; //prints name and how many votes they got from a campus
    
    //Destructor
    ~CandidateType();

private:
    
    int totalVotes; //total votes
    int array[NUM_OF_CAMPUSES] = {1,2,3,4}; //array that will store the votes for each campus


};
#endif

