//A program that uses the numberModifications class under NumberOperation.h
//Asks user input for 2 numbers, returns the sum, difference, product, quotient, and greatest common divisor


#include <iostream>
#include <string>
#include "NumberOperation.h"
using namespace std;

int main()
{
    numberModifications nums;

    nums.inputData();

    cout << "The sum of the 2 numbers are: " << nums.sum() << endl;
    cout << "The difference of the 2 numbers are: " << nums.difference() << endl;
    cout << "The product of the 2 numbers are: " << nums.multiplication() << endl;

    if(nums.division() == 0)
        cout << "Cannot divide by 0" << endl;
    else
        cout << "The quotient of the 2 numbers are: " << nums.division() << endl;

    cout << "The greatest common divisor of the 2 numbers are: " << nums.gcd() << endl;

    return 0;
}

