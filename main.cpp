/* 
 * File:   main.cpp
 * Author: Matt
 *
 * Created on April 16, 2015, 3:05 PM
 */

#include <cstdlib>
#include <iostream>
#include "ReversibleNumbers.h"

using namespace std;

int main(int argc, char** argv) {
    int count = 0;
    ReversibleNumbers test;
    for (long i = 0; i < 1000000000; i++) {
        if (test.isReversible(i)) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

