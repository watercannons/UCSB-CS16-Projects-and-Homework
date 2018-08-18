#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tallyTotalValue(int a[]);
    void tallyTotalReference(int b[], int &c);
    void tallyTotalPointer(int d[], int *f);

    int scores[] = {100,85,64,91,71,82};
    int refResults = 0;
    int ptrResults = 0;

    int scoresCombinedSum = tallyTotalValue(scores);
    tallyTotalReference(scores, refResults);
    tallyTotalPointer(scores, &ptrResults);

    cout << "return by value: " << scoresCombinedSum << endl;
    cout << "return by reference: " << refResults << endl;
    cout << "return by pointer: " << ptrResults;

    return 0;
}

int tallyTotalValue(int scores[])
{
    int x = 0;
    for(int i = 0; i < sizeof(scores); i++)
    {
        x += scores[i];
    }
    return x;
}

void tallyTotalReference(int scores[], int &result)
{
    for(int i = 0; i < sizeof(scores); i++)
        result += scores[i];
}

void tallyTotalPointer(int scores[], int *result)
{
    for(int i = 0; i < sizeof(scores); i++)
        *result += scores[i];
}