/*
 
 Gurshaan Maan, Muhammad Jafri, Giovanni Flores, Braiden Nagele

 CMPR 121 - SPRING 2024
 June 2 2024

 Final Project Submission
 
 Collaborations: https://www.youtube.com/watch?v=RNMIDj62o_o&t=955s, https://www.youtube.com/watch?v=HKfj0l7ndbc, https://www.youtube.com/watch?v=rJlJ8qqVm3k, class notes, chatgpt, Professor Alweheiby
*/
#include "CandidateType.h"

CandidateType::CandidateType()
{
    totalVotes = 0;
    for (int i = 0; i < NUM_OF_CAMPUSES; i++)
    {
        array[i] = 0; //initalizes all the campuses/elements votes to 0
    }
}

void CandidateType::updateVotesByCampus(const int campusNumber, int totalVotesOfCampus)
//Takes in campus number and votes placed for campus updates campus total & total for all campuses.
{
    array[campusNumber] += totalVotesOfCampus;
    totalVotes += totalVotesOfCampus;
}

int CandidateType::getTotalVotes() const //returns totalVotes;
{
    return totalVotes;
}

int CandidateType::getVotesByCampus(const int campusNumber) //returns total votes for campus
{
    return array[campusNumber];
}

void CandidateType::printCandidateInfo()  //prints SSN, First & last name
{
    printPersonInfo();
}

void CandidateType::printCandidateTotalVotes() const //prints name and how many votes they got from all the campuses 
{
    printName();
    std::cout << std::setw(31) << "Total Votes(all campuses) : " << totalVotes << std::endl << std::endl;
}

void CandidateType::printCandidateCampusVotes(const int NUM_OF_CAMPUSES) const //prints name and how many votes they got from a campus
{
    printName();
    std::cout << std::setw(10) << "Campus " << NUM_OF_CAMPUSES << " total votes: " << array[NUM_OF_CAMPUSES];
}

CandidateType::~CandidateType() //destructor
{

}
