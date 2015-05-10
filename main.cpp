/* 
 * File:   main.cpp
 * Author: Gamindu
 *
 * Created on May 7, 2015, 7:19 PM
 */

#include <cstdlib>
#include<iomanip>
#include<vector>
#include<typeinfo>
#include<iostream>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    cout<<fixed<<setprecision(2);
    vector<Employee*>employee(3);
    
    employee[0] = new SalariedEmployee("Ravi","Abenayaka","802734456",15000.0);
    employee[1] = new CommissionEmployee("Saman","Samarasekara","794534568",50000.0,0.5);
   employee[2] = new BasePlusCommissionEmployee("Namal ","Jayaruwan","823345456",50000.0,.07,5000.0);
    
    for(size_t i = 0; i<employee.size();++i)
    {
        employee[i]->print();
        cout<<endl;
        
        BasePlusCommissionEmployee *derivedPtr =
           dynamic_cast<BasePlusCommissionEmployee*>(employee[i]);
        
        
        if(derivedPtr != 0)
        {
            double oldBaseSalary = derivedPtr->getBasesalary();
            cout<<"old Base salary: R"<<oldBaseSalary<<endl;
            derivedPtr->setBaseSalary(1.10*oldBaseSalary);
            cout<<"New Base Salary with 10% increase  is : R"
                <<derivedPtr->getBasesalary()<<endl;
        }
        cout<<"Earned R "<<employee[i]->earnings()<<"\n\n";
    }   
   for(size_t j =0;j<employee.size();++j)
   {
       cout<<"Deleting Object of"
            <<typeid(*employee[j]).name()<<endl;
       delete employee[j];
   }

   
    return 0;
}

