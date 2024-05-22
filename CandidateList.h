
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
    void addCandidate(const CandidateType& newCandidate);
    int getWinner() const; //accessor
    void searchCandidate(int SSN);
    void printCandidateName(int SSN);
    void printAllCandidates();
    void printCandidateCampusVotes();
    void printCandidateTotalVotes();
    void destroyList();
    ~CandidateList();//destructor
    
    private:
    Node *first; //points to the first node and will traverse the list
    Node *last; //points to last node (null)
    int count; //stores the number of nodes in the list
};
#endif
