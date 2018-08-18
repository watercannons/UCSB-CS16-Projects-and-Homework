#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arrayOfChars = "wasd keys";
    char stringEquivalent[] = "wasd keys";

    int strLength = arrayOfChars.length();
    int charLength = sizeof(stringEquivalent);

    cout << strLength << " != " << charLength << " because of the null character in the array" << endl;
    cout <<  arrayOfChars.substr(0,1) << " = " << stringEquivalent[0] << endl;

    for(int i = charLength - 2; i > -1; i--)
        cout << stringEquivalent[i];
    cout << " = ";

    for(int i = strLength - 1; i > -1; i--)
        cout << arrayOfChars.substr(i,1);
    cout << endl;



    return 0;
}