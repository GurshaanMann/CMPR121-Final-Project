/*
 
 header
 
 
 */
#pragma once
#ifndef CandidateList_h
#define CandidateList_h
#include "CandidateType.h"

class Node
{
public:
    Node() : link(nullptr) {}
    Node(const CandidateType& votes, Node* theLink)
        : candidate(votes), link(theLink) {}
    Node* getLink() const { return link; } 
    CandidateType getCandidate() const { return candidate; }
    void setCandidate(const CandidateType& votes) { candidate = votes; }
    void setLink(Node* theLink) { link = theLink; }
    ~Node() {}
private:
    CandidateType candidate;
    Node* link;        //pointer that points to next node
};

class CandidateList
{
    public:
    CandidateList(); // constructor
    void addCandidate(const CandidateType& newCandidate); //creates a new node that stores object from candidateType class.
    int getWinner() const; //Checks to see which node has highest total votes and awards it as winner (aaccessor)
    bool searchCandidate(int SSN) const; //Uses the parameter to search for candidate and prints there SSN
    void printCandidateName(int SSN) const; //Uses the parameter to search for candidate and then prints there name
    void printAllCandidates() const; //Passes through each node printing the candidates name.
    void printCandidateCampusVotes(int SSN, int divisonNumber) const; //
    void printCandidateTotalVotes(int SSN) const; //Uses the parameter to search for candidate and then print there total votes
    void destroyList(); //destroys node list and is called in the destructor
    ~CandidateList();//destructor
    //CandidateList(const CandidateList& object); //copy constructor
    //CandidateList& operator=(const CandidateList& rightSide); //overloaded assignment operator.
    void printFinalResults() const;
    private:
    Node *first; //points to the first node and will be used for the start of list traversal
    Node *last; //points to last node (null)
    int count; //stores the number of nodes in the list
};
#endif
