/* 
 * File:   main.cpp
 * Author: Matt
 *
 * Created on March 15, 2015, 12:09 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream sudokuGames("sudoku.txt");
    string line;
    int count = 0;
    if (sudokuGames.is_open()) {
        while (getline(sudokuGames, line)) {
            if(count == 10) {
                cout << endl;
                count = 0;
            }
            cout << line << endl;
            count++;
        }
        sudokuGames.close();
    } else cout << "Unable to open file";

    return 0;
}

