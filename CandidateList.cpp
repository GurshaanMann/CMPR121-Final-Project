//
//  CandidateList.cpp
//  CMPR120
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
    Node* nodeForNewCandidate = new Node(); //creates a new node which will store data from candidateType object
    nodeForNewCandidate->setCandidate(newCandidate); //Stores the data from candidateType object inside the node
    if (first == nullptr) //if nothing is in the list yet
    {
        first = nodeForNewCandidate; // adds new candidate
        last = nodeForNewCandidate; //adds new candidate
    }
    else //adds the new candidate to the end of the list
    {
        last->setLink(nodeForNewCandidate); //moves last to a nullptr
        last = nodeForNewCandidate; //puts new candidate in the nullptr
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
    
    for (int i = 1; i <= count; i++) //stops when it reaches the end of the list
    {
        if (current->getCandidate().getTotalVotes() > winnerCandidate->getCandidate().getTotalVotes()) //if the current node has more than the
                                                                                                       //winner candidate node.
        {
            winnerCandidate = current;
        }
        current = current->getLink();
    }
    return winnerCandidate->getCandidate().getSSN(); //returns the winner candidates SSN
}

bool CandidateList::searchCandidate(int SSN) const
{
    Node* current = first; //node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
        return false;
    }
    
    while (current != nullptr) //repeats until its at the end of list
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

void CandidateList::printCandidateName(int SSN) const //***----FIX SSN NOT IN THE LIST***----//
{
    Node* current = first; //node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
    
    while (current != nullptr) //repeats until SSN found
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

void CandidateList::printAllCandidates() const
{
    Node* current = first; //node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
    
    for (int i = 1; i <= count; i++) //loops till it goes through the whole list
    {
        current->getCandidate().printCandidateInfo(); //prints candidate info
        current = current->getLink();
    }
}

void CandidateList::printCandidateCampusVotes(int SSN, int divisonNumber) const
{
    Node* current = first;//node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
    
    while (current != nullptr) //Repeats until its at end of list
    {
        if (current->getCandidate().getSSN() == SSN)
        {
            std::cout << current->getCandidate().getVotesByCampus(divisonNumber);
        }
        current = current->getLink();
    }
}

void CandidateList::printCandidateTotalVotes(int SSN) const
{
    Node* current = first;//node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
    
    while (current != nullptr) //Repeats until its at end of list
    {
        if (current->getCandidate().getSSN() == SSN) //if SSN is found
        {
            std::cout << current->getCandidate().getTotalVotes(); //prints total votes for the candidate
        }
        current = current->getLink();
    }
}

void CandidateList::destroyList() //used in destructor 
{
    
    Node* current = first; //node that will traverse the list
    while (current != nullptr) //runs as long as current isn't null (deletes the list).
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
    destroyList(); //deletes the list
}

/*
 CandidateList::CandidateList(const CandidateList& object) //copy constructor NOT CORRECT.
{
    count = object.count;
    first = object.first;
    last = object.last;
}
*/
/*
 CandidateList& CandidateList::operator=(const CandidateList& rightSide) //overloaded assignment operator. NOT CORRECT.
{
    if (this != &rightSide)
    {
        count = rightSide.count;
        first = rightSide.first;
        last = rightSide.last;
    }
    else
    {
        std::cout << "ERROR: self assignment occured\n";
    }
    return *this;
}
*/

void CandidateList::printFinalResults() const
{
    Node* current = first; //node that will traverse the list
    if (count == 0) //Checks to see if there are any candidates/nodes in the list
    {
        std::cout << "=> List is empty \n";
    }
    
    for (int i = 1; i <= count; i++) //loops till it goes through the whole list
    {
        current->getCandidate().printCandidateTotalVotes(); //prints candidate info
        current = current->getLink();
    }
}
