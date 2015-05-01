/* 
 * File:   ReversibleNumbers.h
 * Author: Matt
 *
 * Created on April 16, 2015, 3:06 PM
 */

#ifndef REVERSIBLENUMBERS_H
#define	REVERSIBLENUMBERS_H

class ReversibleNumbers {
public:
    //Constructors
    ReversibleNumbers();
    ReversibleNumbers(const ReversibleNumbers& orig);

    //Helpers
    bool isReversible(long num);
    long reverseNumber(long num);
    bool allOddDigits(long num);

private:

};

#endif	/* REVERSIBLENUMBERS_H */