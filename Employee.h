/* 
 * File:   Employee.h
 * Author: Gamindu
 *
 * Created on May 7, 2015, 7:23 PM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include<string>
#include<stdexcept>
class Employee {
public:
    Employee(const std::string &, const std::string &, const std::string &);
    
    void setFirstName(const std::string  &);
    std::string getFirstName()const;
    
    void setLastName(const std::string &);
    std::string getLastName()const;
    
    void setSocialSecurityNumber(const std::string &);
    std::string getSocialSecurityNumber()const;
    
    virtual double earnings()const = 0;
    virtual void print()const;
    
    
    virtual ~Employee();
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    

};

#endif	/* EMPLOYEE_H */

