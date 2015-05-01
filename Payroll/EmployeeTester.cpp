/* 
 * File:   main.cpp
 * Author: Matt
 *
 * Created on March 22, 2015, 11:20 PM
 */

#include <cstdlib>
#include <stdio.h>

#include "Employee.h"

using namespace std;

const int MAX_WIDTH = 20;
const int IDNumber [] = {1, 2, 3};
const string NAMES [] = {"Matthew", "Emily", "Justin"};
const double PAY [] = {2.00, 42.50, 310.75};
/*
 * 
 */
int main(int argc, char** argv) {
    for(int i = 0; i < 3; i++) {
        Employee * employeeObject = new Employee(IDNumber[i], NAMES[i], PAY[i]);
        printf ("%-*s%s\n", MAX_WIDTH, "NAME:", employeeObject->getName().c_str());
        printf ("%-*s%i\n", MAX_WIDTH, "ID_#:", employeeObject->getId());
        printf ("%-*s%c%.2f\n", MAX_WIDTH, "PAYRATE:", '$', employeeObject->getPayRate());
        printf ("%-*s%c%.2f\n", MAX_WIDTH, "GROSS PAY:", '$', employeeObject->grossPay(40.00));
        printf ("%-*s%c%.2f\n",MAX_WIDTH, "NET PAY:", '$', employeeObject->netPay(40.00));
        employeeObject->setName("REDACTED");
     //   printf ("%-*s\n", MAX_WIDTH, "ALERT: NAME CHANGED!");
          printf ("%30s\n", "ALERT: NAME CHANGED!");
        printf ("%-*s%s\n", MAX_WIDTH, "New Name:", employeeObject->getName().c_str());
        printf ("\n");
        delete employeeObject;
    }
    return 0;
}

