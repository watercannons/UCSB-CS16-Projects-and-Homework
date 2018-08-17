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
                break;
            }
        }
    }

    if(change = false)
        cout << "unable to give correct change";
    else
        cout << "able to give correct change";
}