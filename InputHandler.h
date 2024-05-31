/*
 
 Gurshaan Maan, Muhammad Jafri, Giovanni Flores, Braiden Nagele

 CMPR 121 - SPRING 2024
 June 2 2024

 Final Project Submission
 
 Collaborations: Youtube, class notes, chatgpt, Professor Alweheiby
*/
#pragma once
#ifndef InputHandler_h
#define InputHandler_h
#include <fstream>
#include <string>
#include "CandidateList.h"


void createCandidateList(std::ifstream& infile, CandidateList& candidateList)
{
	int ssn = 0;
	int allVotes[NUM_OF_CAMPUSES];
	std::string  fName, lName;

	infile >> ssn;

	while (ssn != -999)
	{
		CandidateType newCandidate;

		infile >> fName;
		infile >> lName;
		newCandidate.setPersonInfo(fName, lName, ssn);

		for (int i = 0; i < NUM_OF_CAMPUSES; ++i)
		{
			infile >> allVotes[i];
			newCandidate.updateVotesByCampus(i, allVotes[i]);
		}

		candidateList.addCandidate(newCandidate);


		infile >> ssn;
	}
}

void readCandidateData(CandidateList& candidateList)
{
	std::ifstream infile;

	infile.open("candidate_data.txt");

	if (!infile)
	{
		std::cerr << "Input file does not exist." << std::endl;
		exit(1);
	}

	createCandidateList(infile, candidateList);

	infile.close();
}
#endif
