/* 
 * File:   Employee.cpp
 * Author: Matt
 * 
 * Created on March 22, 2015, 11:28 PM
 */

#include "Employee.h"

// 1 Create three instance variables
int id;
std::string name;
double payRate;
// 2 Create a constant TAX_RATE with the value 0.25
const double Employee::TAX_RATE = 0.25;

/*
 *Create a Employee constructor that has three parameters 
 * (in order) initId, initName,  initAmount. 
 * These parameters will contain the values 
 * to be used to initialize the instance variables. 
 */
Employee::Employee(int initId, std::string initName, double initAmount) {
    id = initId;
    name = initName;
    payRate = initAmount;
}

int Employee::getId() {
    return id;
}

std::string Employee::getName() {
    return name;
}

double Employee::getPayRate() {
    return payRate;
}

void Employee::setName(std::string newName) {
    name = newName;
}

double Employee::grossPay(double hours) {
    return hours * payRate;
}

double Employee::netPay(double hours) {
    return grossPay(hours) * (1.0 - TAX_RATE);
}