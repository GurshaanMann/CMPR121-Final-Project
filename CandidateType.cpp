#include "CandidateType.h"

CandidateType::CandidateType()
{
    totalVotes = 0;
    array[0] = {0};
    array[1] = {0};
    array[2] = {0};
    array[3] = {0};
}

void CandidateType::updateVotesByCampus(const int campusNumber, int totalVotesOfCampus)
//Takes in campus number and votes placed for campus updates campus total & total for all campuses.
{
    array[campusNumber - 1] += totalVotesOfCampus;
    totalVotes += totalVotesOfCampus;
}

int CandidateType::getTotalVotes() const //returns totalVotes;
{
    return totalVotes;
}

int CandidateType::getVotesByCampus(const int campusNumber) //returns total votes for campus
{
    return array[campusNumber - 1];
}

void CandidateType::printCandidateInfo()  //prints SSN, First & last name
{
    printPersonInfo();
}

void CandidateType:: printCandidateTotalVotes() const //prints name and how many votes they got from all the campuses
{
    printName();
    std::cout << std::setw(31) << "Total Votes(all campuses) : " << totalVotes;
}

void CandidateType::printCandidateCampusVotes(const int NUM_OF_CAMPUSES) //prints name and how many votes they got from a campus
{
    printName();
    std::cout << std::setw(10) << "Campus " << NUM_OF_CAMPUSES << " total votes: " << array[NUM_OF_CAMPUSES - 1];
}

CandidateType::~CandidateType() //destructor
{

}
