#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    //argc is the number of words
    //argv is a string of all the words, stored in array positions

    bool ifOutputFile = false;
    string fileName;
    string outputFile;

    if(argc < 2)
        missing();

    fileName = argv[1];

    for(int i = 0; i < argc; i++)
    {
        if(argv[i][0] == '-')   //detects output code
        {
            if(argv[i] == "-o")
            {
                if(i == argc - 1)
                    //proceed with output to file operations
                    outputFile = argv[i+1];
                ifOutputFile = true;
            }
            else
            {
                //call badOption, exit
                badOption("argv[i");
            }
        }
    }

    //

    fstream indata;
    fstream outputResults;

    //char fileName[] = argv[0];





    indata.open(fileName,ios::in);

    if(indata.fail())
    {
        cerr << "error opening file";
        exit(-1);
    }

    int countTotal = 0;
    int charCount[128] = {};
    char x = ' ';

    char outdata = ' ';

    for(int i = 0; i < 128; i++)
    {
        charCount[i] = 0;
    }

    while(indata.get(outdata))
    {
        countTotal++;
        charCount[int(outdata)]++;
    }

    indata.close();

    outputResults.open(outputFile,ios::out);

    if(outputResults.fail())
    {
        //badFile(char[](outputFile));
    }

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


//These are modifications from common.h, since this program requires printing out the results, rather than
void prHeaderOut() {
    cout << "Code\tChar\tCount\n----\t----\t-----\n";
}

void prCountStrOut(int code, const char str[], int count) {
    cout << std::setw(3) << code << '\t' << str << '\t'
         << std::setw(5) << count << std::endl;
}

void prCountChrOut(int code, const char chr, int count) {
    cout << std::setw(3) << code << '\t' << chr << '\t'
         << std::setw(5) << count << std::endl;
}

void prTotalOut(int count) {
    cout << "\t\t-----\nTotal\t\t"
         << std::setw(5) << count << std::endl;
}