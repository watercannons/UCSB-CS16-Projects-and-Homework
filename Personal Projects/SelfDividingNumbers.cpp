#include <iostream>
#include <string>
using namespace std;

int main()
{
    int low = 0;
    int high = 0;

    cin >> low;
    cin >> high;

    for(int i = low; i < high + 1; i++)
    {
        bool digitPassed = true;
        //char[] x =
        string x = to_string(i);

        for(int j = 0; j < x.length() - 1; j++)
        {
            if(x.substr(j,j+1) == "0")
            {
                digitPassed = false;
                break;
            }
            else
            {
                if(i & stoi(x.substr(j,j+1)) != 0)
                {
                    digitPassed = false;
                    break;
                }
            }
        }

        if(digitPassed)
            cout << i << endl;
    }

    return 0;
}