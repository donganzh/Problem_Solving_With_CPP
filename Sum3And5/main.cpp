/* 
 * File:   main.cpp
 * Author: Matt
 *
 * Created on January 20, 2015, 3:08 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

const int THREE = 3;
const int FIVE = 5;
const int FIFTEEN = 15;
int numberInput;

// Returns true if the given number is divisible by 3 with no remainder
bool divByThree(int n) {
    return ((n % 3) == 0);
}

// Returns true if the given number is divisible by 5 with no remainder
bool divByFive(int n) {
    return ((n % 5) == 0);
}

// Order(N) solution
// Iterates through every number from 1 to n-1 inclusive
// If the number is divisible by 3 or 5 it is added to the total
int iterativeSum(int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (divByThree(i) || divByFive(i)) {
            total += i;
        }
    }
    return total;
}

// Order(1) solution to iterativeSum
int sum(int n) {
    int sum;
    sum = ((THREE * ((n-1)/THREE) * (((n-1)/THREE) + 1) / 2) + (FIVE * ((n-1)/FIVE) * (((n-1)/FIVE) + 1) / 2) - (FIFTEEN * ((n-1)/FIFTEEN) * (((n-1)/FIFTEEN) + 1) / 2));
    return sum;
}


int main(int argc, char** argv) {
     
    cout << "This program will sum up all numbers divisible by 3 or 5 from 1 up to but not including, a maximum integer given by you" << endl;
    cout << "Please enter an integer number" << endl;
    cin >> numberInput;
    
    int resultOrderN = iterativeSum(numberInput);
    cout << "Order(" << numberInput << ") solution: " << resultOrderN << endl;
    
    int resultOrder1 = sum(numberInput);
    cout << "Order(1) solution: " << resultOrder1 << endl;
    
    return 0;
}

