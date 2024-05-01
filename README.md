Member variables (private in candidatetype class)
An integer that stores the total number of votes. 
An array of integers that has capacity of NUM_Of_CAMPUSES.
The campuses will be labeled by numbers (i.e., Santiago Canyon College = 1, Santa Ana College = 2, and so on) where one
corresponds to index 0 of the array, 2 corresponds to index 1 of the array, etc.


Function updateVotesByCampus
Parameters: The Campus number and the number of votes for that campus.
Updates the total number of votes and the number of votes for the campus specified


Function: getVotesByCampus 
Parameter: The Campus number.
Returns the votes for the specified Campus.


Function: printCandidateInfo
Prints information about the candidate in the following format:
###-##-#### - lName, fName
Note: the “#” should be replaced with integers.


Function: printCandidateTotalVotes
Prints the candidate’s total votes in the following format:
Lastname, Firstname
Total Votes ( all campuses) : ##
Note that “#” should be replaced with an integer.


Function: printCandidateCampusVotes
Parameters: The Campus number.
Prints the candidate’s vote for the specified Campus:
Lastname, Firstname
Campus # total votes: ##
Note that “#” should be replaced with an integer.
