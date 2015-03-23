/* 
 * File:   main.cpp
 * Author: Matt
 *
 * Created on March 22, 2015, 11:20 PM
 */

#include <cstdlib>
#include <iostream>

#include "Employee.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Employee * employeeObject = new Employee(1234, "Pat", 15.75);
    cout << "ID: " << employeeObject->getId() << endl;
    cout << "NAME: " << employeeObject->getName() << endl;
    cout << "PAYRATE: " << employeeObject->getPayRate() << endl;
    cout << "GROSS PAY: " << employeeObject->grossPay(40.00) << endl;
    cout << "NET PAY: " << employeeObject->netPay(40.00) << endl;
    delete employeeObject;
    return 0;
}

