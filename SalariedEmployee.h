/* 
 * File:   SalariedEmployee.h
 * Author: Gamindu
 *
 * Created on May 7, 2015, 7:58 PM
 */

#ifndef SALARIEDEMPLOYEE_H
#define	SALARIEDEMPLOYEE_H
#include<stdexcept>
#include"Employee.h"
class SalariedEmployee:public Employee {
public:
    SalariedEmployee(const std::string &, const std::string &,
            const std::string &,double = 0.0);
    
    void setWeeklySalary(double);
    double getWeeklySalary()const;
    
    virtual double earnings()const;
    virtual void print() const;
    
    
private:
    double weeklySalary;
    
};

#endif	/* SALARIEDEMPLOYEE_H */

