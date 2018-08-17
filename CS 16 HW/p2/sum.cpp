#include <iostream>
using namespace std;

int main()
{
    int numInput;
    int sumPos = 0;
    int sumNeg = 0;
    int sumT = 0;

    int counterPos = 0;
    int counterNeg = 0;
    int input;

    cout << "How many numbers will you enter?" << endl;
    cin >> numInput;

    if(numInput <= 0)
    {
        cout << "There is nothing to sum." << endl;
    }
    else
    {
        while(numInput > 0)
        {
            cout << numInput << " Entries left to go: ";
            cout << endl;
            cin >> input;

            sumT += input;

            if(input > 0)
            {
                sumPos += input;
                counterPos++;
            }
            else
            {
                sumNeg += input;
                sumNeg ++;
            }

            numInput--;
        }

        cout << "The sum of " << counterPos << " numbers greater than zero is " << sumPos << "." << endl;
        cout << "The sum of " << counterNeg << " numbers less than zero is " << sumNeg << "." << endl;
        cout << "The sum of all " << numInput << " numbers is " << sumT << "." << endl;
    }

    cout << "Goodbye.";

    return 0;
}