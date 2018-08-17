#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    fstream indata;
    fstream outputResults;
    string fileName = "C:\\Users\\watercannons\\CLionProjects\\CS16GHWC++\\characters.txt";
    string outputFile = "C:\\Users\\watercannons\\CLionProjects\\CS16GHWC++\\output.txt";

    int countTotal = 0;
    int charCount[128] = {};
    char x = ' ';

    char outdata = ' ';

    for(int i = 0; i < 128; i++)
    {
        charCount[i] = 0;
    }

    indata.open(fileName,ios::in);

    if(indata.fail())
    {
        cerr << "error opening file";
        exit(-1);
    }

    while(indata.get(outdata))
    {
        countTotal++;
        charCount[int(outdata)]++;
    }

    indata.close();

    outputResults.open(outputFile,ios::out);

    prHeader(outputResults);

    for(int i = 0; i < 33; i++)
    {
        if(charCount[i] != 0)
        {
            prCountStr(outputResults, i, symbols[i] ,charCount[i]);
        }
    }

    for(int i = 33; i < 127; i++)
    {
        if(charCount[i] != 0)
        {
            x = i;
            prCountChr(outputResults, i, x, charCount[i]);
        }
    }

    if(charCount[127] != 0)
    {
        prCountStr(outputResults, 127, symbolDel, charCount[127]);
    }

    prTotal(outputResults,countTotal);

    outputResults.close();

    return 0;
}