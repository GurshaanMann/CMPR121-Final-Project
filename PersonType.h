


#ifndef PERSONTYPE_H
#define PERSONTYPE_H
class PersonType
{
    //public interface
    public:
    
    //default constructor
    PersonType();
    
    //Overloaded constructor
    
    //Destructor
    ~PersonType();
    
    //getters or accessors
    string getFirstName();
    string getLastName();
    int getSSN();
    
    
    //setters or mutators
    void setPersonInfo(string firstName, string lastName, int newSSN);
    
    //other functionality
    void printName();
    void printPersonInfo();
    void printSSN();
    
    private:
    string fName;
    string iName;
    int SSN;
    
};
#endif
