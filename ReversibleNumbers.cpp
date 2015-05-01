/* 
 * File:   ReversibleNumbers.cpp
 * Author: Matt
 * 
 * Created on April 16, 2015, 3:06 PM
 */
#include "ReversibleNumbers.h"

using namespace std;

ReversibleNumbers::ReversibleNumbers() {
}

ReversibleNumbers::ReversibleNumbers(const ReversibleNumbers& orig) {
}

bool ReversibleNumbers::isReversible(long num) {
    if (num % 10 == 0) return false;
    long reversed = reverseNumber(num);
    long sum = num + reversed;
    if (allOddDigits(sum)) {
        return true;
    }
    return false;
}

long ReversibleNumbers::reverseNumber(long num) {
    int temp;
    long result = 0;
    while (num > 0) {
        temp = num % 10;
        num = (num - temp) / 10;
        result = (result * 10) + temp;
    }
    return result;
}

bool ReversibleNumbers::allOddDigits(long num) {
    int temp;
    while (num > 0) {
        temp = num % 10;
        if (temp % 2 == 0) {
            return false;
        }
        num = (num - temp) / 10;
    }
    return true;
}