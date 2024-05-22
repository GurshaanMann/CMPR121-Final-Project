//
//  CandidateList.cpp
//  CMPR120
//
//  Created by Muhammad Jafri on 5/11/24.
//

#include "CandidateList.h"

CandidateList::CandidateList() // constructor
{
    count = 0;
    first = nullptr;
    last = nullptr;
}
void CandidateList::addCandidate(const CandidateType& newCandidate)
{
    
    if (first == nullptr)
    {
        
    }
    else
    {
        
    }
    count++;
}
int CandidateList::getWinner() const //accessor
{

}
bool CandidateList::searchCandidate(int SSN)
{
    //while (
    return false;
}
void CandidateList::printCandidateName(int SSN)
{
    
}
void CandidateList::printAllCandidates()
{
    
}
void CandidateList::printCandidateCampusVotes()
{
    
}
void CandidateList::printCandidateTotalVotes()
{
    
}
void CandidateList::destroyList() //used in destructor 
{
    
    Node* current = first;
    while (current != nullptr)
    {
        first = first -> getLink();
        delete current;
        current = first;
    }
    //first = nullptr;
    last = nullptr;
    count = 0;
}
CandidateList::~CandidateList() //destructor
{
    destroyList();
}
