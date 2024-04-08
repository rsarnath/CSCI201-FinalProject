//  with the command "g++ -c  employeeList.cpp"

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include "employee.h"
#include "employeeList.h"#include<vector>
using namespace std;
/*------------------------------------------------------------------------
Functions for handling and processing the list of  employees
-------------------------------------------------------------------------*/
bool employeeList::addEmployee(employee e){  
  //cout << maxSize << endl;
  if ((empList.size()) >= maxSize)
     return false;  
  empList.push_back(e);
  return true;  
}  
void employeeList::writeData(ostream& outfile){  for(unsigned int index = 0; index < empList.size(); index++)    {       (empList.at(index)).writeEmployee(outfile);
       outfile << endl;    }}void employeeList::processPayroll()
{  // processes the payroll for the list of employees.
  
  for(unsigned int index = 0; index < empList.size(); index++)  
    (empList.at(index)).processEmployee();  
}
void employeeList::printReport(ostream& outfile){
  for(unsigned int index = 0; index < empList.size(); index++)    {      (empList.at(index)).printReport(outfile);
    }
}
void employeeList::printTable(ostream& outfile){  for(unsigned int index = 0; index < empList.size(); index++)    {      (empList.at(index)).printRecord(outfile);    }
} 


employee& employeeList::getEmployee(int i)
{ 
  return empList.at(i);
}


int employeeList::searchById(string Id)
{  //returns the index if there is a match;  -1 otherwise.
  for (unsigned int index = 0; index < empList.size(); index++)
    {
      if ((empList.at(index)).getId() == Id)
	  return index;
    }
  return -1;}

int employeeList::searchByName(char name[])
{  //returns the index if there is a match;  -1 otherwise.
  for (unsigned int index = 0; index < empList.size(); index++)    
    { 
       if (strcmp(name, (empList.at(index)).getName()) == 0)
	  return index;    
    }
  return -1;
}
