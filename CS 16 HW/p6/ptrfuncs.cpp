// ptrfuncs.cpp
// YOUR NAME(S), DATE

#include <iostream>
#include <iomanip> // to use setw
using namespace std;
//#include "ptrfuncs.h"

// IMPLEMENT ptrfuncs.h FUNCTIONS BELOW


//*values points to an int array
//n is the size of the array

double sum(double *values, int n)
{
    double result = 0;
    for(int i = 0; i < n; i++)
    {
        result += *(values + i);
    }
    return result;
}

double *maxPtr(double *values, int n)//doesn't want max, wants the pointer to max
{
    double result = *values;
    double *ptrValue = values;
    for(int i = 1; i < n; i++)
    {
        if(*(values+i) > result)
        {
            result = *(values + i);
            ptrValue = values + i;
        }
    }
    return ptrValue;
}

double *minPtr(double *values, int n)
{
    double result = *values;
    double *ptrValue = values;
    for(int i = 1; i < n; i++)
    {
        if(*(values+i) < result)
        {
            result = *(values + i);
            ptrValue = values + i;
        }
    }
    return ptrValue;
}

double valueDiff(double *left, double *right)
{
    return *left - *right;
    //return 100.00;
}

void printTable(double *values, int n, int perRow)//values is the 1st memory location in array, n = # of values,per row is # per row
{
    int posCounter = 0;

    while(posCounter < 25)
    {
        for(int i = 0; i < perRow; i++)
        {
            cout << setprecision(2) << *(values + posCounter);
            posCounter++;

            if(i == perRow)
                break;
            else
                cout << setw(4) << setfill(' ');
        }
        cout << endl;
    }
}

void sortValues(double *first, double *last)
{
    for(int i = 0; i < last - first - 1; i++)
    {
        if(*(first + i) > *(first + i + 1))
        {
            double temp = *(first + i + 1);
            *(first + i + 1) = *(first + i);
            *(first + i) = temp;
        }
    }
}
