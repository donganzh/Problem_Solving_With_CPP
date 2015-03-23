/* 
 * File:   Employee.h
 * Author: Matt
 *
 * Created on March 22, 2015, 11:28 PM
 */

#include <string>

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

class Employee {
public:
    static const double TAX_RATE;
    Employee(int, std::string, double);
    int getId();
    std::string getName();
    double getPayRate();
    void setName(std::string);
    double grossPay(double);
    double netPay(double);
private:

};

#endif	/* EMPLOYEE_H */

