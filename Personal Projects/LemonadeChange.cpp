/*
This program calculates if it's possible to give out change in the following circumstances:

1. Each lemonade costs $5
2. Each customer gives a currency denomination of either $5, $10, or $20
3. The starting money is $0
4. Change must be given in the order of the array bills[]

If change can be given out in the correct order, the program prints out true. Otherwise, prints out false
*/

#include <iostream>
using namespace std;

int main()
{
    int bills[7] = {5,5,10,20,10,5,5};
    int *billPtr = bills;

    int fiveCounter = 0;
    int tenCounter = 0;

    bool change = true;

    if(*billPtr == 10 || *billPtr == 20)
        change = false;
    else
    {
        for(int i = 0; i < 7; i++)
        {
            if(*(billPtr + i) == 5)
                fiveCounter++;
            else if(*(billPtr + i) == 10)
            {
                tenCounter++;
                fiveCounter--;
            }
            else if(*(billPtr + i) == 20)
            {
                if(tenCounter > 0)
                {
                    tenCounter--;
                    fiveCounter--;
                }
                else
                    fiveCounter -= 3;
            }

            if(tenCounter < 0 || fiveCounter < 0)
            {
                change = false;
h                break;
            }
        }
    }

    if(change = false)
        cout << "unable to give correct change";
    else
        cout << "able to give correct change";
}
