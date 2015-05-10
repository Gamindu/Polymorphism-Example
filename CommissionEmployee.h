/* 
 * File:   CommissionEmployee.h
 * Author: Gamindu
 *
 * Created on May 8, 2015, 1:18 PM
 */

#ifndef COMMISSIONEMPLOYEE_H
#define	COMMISSIONEMPLOYEE_H
#include"Employee.h"
class CommissionEmployee:public Employee {
public:
    CommissionEmployee(const std::string &,const std::string &,
            const std::string &,double = 0.0, double = 0.0);
    
    void setCommissionRate(double);
    double getCommissionRate()const;
    
    void setGrossSale(double);
    double getGrossSale()const;
    
    virtual double earnings()const;
    virtual void print()const;
    
    
    
private:
    double grossSales;
    double commissionRate;

};

#endif	/* COMMISSIONEMPLOYEE_H */

