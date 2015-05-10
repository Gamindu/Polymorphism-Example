/* 
 * File:   BasePlusCommissionEmployee.cpp
 * Author: Gamindu
 * 
 * Created on May 8, 2015, 2:05 PM
 */
#include<iostream>
#include<stdexcept>
#include"BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string &first,
        const std::string&last,const std::string&ssn,
        double sales, double rate, double salary)
:CommissionEmployee(first,last,ssn,sales,rate)
{
    setBaseSalary(salary);
}


void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary >= 0.0)
    {
        baseSalary = salary;
    }
    else
        throw invalid_argument("Salary must be  >= 0.0  ");
    
}

double BasePlusCommissionEmployee::getBasesalary() const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return getBasesalary()+CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print()const
{
    cout<<" base-salaried";
    CommissionEmployee::print();
    cout<<"; base salary :"<<getBasesalary();
}