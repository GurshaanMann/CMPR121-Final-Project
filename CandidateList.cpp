//
//  CandidateList.cpp
//  CMPR121
//
//  Created by Muhammad Jafri on 5/11/24.
//

#include "CandidateList.h"

CandidateList::CandidateList() // constructor
{
    count = 0; //Starts with no candidates/nodes
    first = nullptr;
    last = nullptr;
}
void CandidateList::addCandidate(const CandidateType& newCandidate)
{
    Node* nodeForNewCandidate = new Node();
    nodeForNewCandidate->setCandidate(newCandidate);
    if (first == nullptr)
    {
        first = nodeForNewCandidate;
        last = nodeForNewCandidate;
    }
    else
    {
        last->setLink(nodeForNewCandidate);
        last = nodeForNewCandidate;
    }
    count++; //increments everytime addCandidate is called indicating a new candidate in list
}
int CandidateList::getWinner() const //accessor
{

    Node* current = first; //node that will traverse the list
    Node* winnerCandidate = first; //stores the winner node
    
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
        return 0;
    }
    
    for (int i = 0; i < count; i++) //stops when it reaches the end of the list
    {
        if (current->getCandidate().getTotalVotes() > winnerCandidate->getCandidate().getTotalVotes()) //if the current node has more than the
                                                                                                       //winner candidate node.
        {
            winnerCandidate = current;
        }
        current = current->getLink();
    }

    return winnerCandidate->getCandidate().getSSN(); //returns the candidates who wons SSN
    
}
bool CandidateList::searchCandidate(int SSN)
{
    Node* current = first; //node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
        return false;
    }
    
    while (current->getCandidate().getSSN() != SSN) //repeats until SSN found
    {
        if (current->getCandidate().getSSN() == SSN) //if SSN is found
        {
            return true;
        }
        current = current->getLink();
    }
    std::cout << "=> SSN not in the list \n";
    return false;
}

void CandidateList::printCandidateName(int SSN)
{
    Node* current = first; //node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
    
    while (current->getCandidate().getSSN() != SSN) //repeats until SSN found
    {
        if (current == nullptr)
        {
            std::cout << "=> SSN not in the list \n";
        }
        
        if (current->getCandidate().getSSN() == SSN) //if SSN of node equals the SSN trying to be found
        {
            current->getCandidate().printName(); //prints candidate name
        }
        current = current->getLink();
    }
    
}

void CandidateList::printAllCandidates()
{
    Node* current = first; //node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
    
    for (int i = 0; i < count; i++) //loops till it goes through the whole list
    {
        current->getCandidate().printCandidateInfo(); //prints candidate info
        current = current->getLink();
    }
}

void CandidateList::printCandidateCampusVotes(int SSN, int divisonNumber)
{
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
}

void CandidateList::printCandidateTotalVotes(int SSN)
{
    Node* current = first;//node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
    
    while (current->getCandidate().getSSN() != SSN) //runs as long as SSN isn't found
    {
        if (current->getCandidate().getSSN() == SSN) //if SSN is found
        {
            current->getCandidate().getTotalVotes();
        }
        current = current->getLink();
    }
}

void CandidateList::destroyList() //used in destructor 
{
    
    Node* current = first; //node that will traverse the list
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
