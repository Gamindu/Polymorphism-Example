/* 
 * File:   CommissionEmployee.cpp
 * Author: Gamindu
 * 
 * Created on May 8, 2015, 1:18 PM
 */

#include<iostream>
#include "CommissionEmployee.h"
using namespace std;
CommissionEmployee::CommissionEmployee(const string &first, const string &last,
        const string &ssn,double sales,double rate)
:Employee(first,last,ssn)        
{
    setGrossSale(sales);
    setCommissionRate(rate);
    
}

void CommissionEmployee::setGrossSale(double sales)
{
    if(sales >= 0.0)
       grossSales = sales;
    else
        throw invalid_argument("Gross Sales must be >= 0.0");
}

double CommissionEmployee::getGrossSale() const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate> 0.0 && rate < 1.0)
        commissionRate = rate;
    else
        throw invalid_argument("Commission Rate must be > 0.0 and < 1.0");
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::earnings() const
{
    return getCommissionRate()*getGrossSale(); 
}

void CommissionEmployee::print() const
{
    cout<<"Commission Employee : ";
    Employee::print();
    cout<<"\ngross sales :  "<<getGrossSale()
        <<";commission rate : "<<getCommissionRate();    
}