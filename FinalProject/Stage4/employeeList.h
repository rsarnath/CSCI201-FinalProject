// This is the header file.
// Do not attempt to compile it.

#include <fstream>
using namespace std;
#include <iostream>#include <vector>
#include <cstring>#include <vector>
#include <iomanip>
#include "employee.h"
#ifndef EMPLOYEELIST
#define EMPLOYEELIST

// employeeList.h

/*------------------------------------------------------------------------
data structures (arrays, variables and constants) to store the information
-------------------------------------------------------------------------*/
class employeeList 
{

private:
 unsigned int maxSize; 
 int  nameLength, idLength; vector<employee> empList;public: //constructor
employeeList(unsigned int size=0)//default
{  maxSize = size;   nameLength = employee::nameLength; 
}
bool addEmployee(employee ); 
void writeData(ostream& outfile);
void processPayroll();
void printReport(ostream& outfile);
void printTable(ostream& outfile);
employee& getEmployee(int i);// IMPORTANT: returns a REFERENCE
                             // to the ith-employee
// Both search functions return the index of the employee
// if there is a match; -1 otherwise.
int searchById(string Id);
int searchByName(char name[]);
};

#endif
