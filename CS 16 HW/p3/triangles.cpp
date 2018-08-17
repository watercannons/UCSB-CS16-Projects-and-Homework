#include <iostream>
using namespace std;

int main()
{
    int triNum = 0;
    int triSize = 0;

    bool numTest = false;
    bool sizeTest = false;

    while(!numTest || !sizeTest)
    {
        cout << "enter number and size of triangles" << endl;

        cin >> triNum;
        cin >> triSize;

        if(triNum <= 4 && triNum >= 1)
            numTest = true;
        else
        {
            cout << "number must be between 1 and 4" << endl;
            numTest = false;
            sizeTest = false;
        }

        if(triSize > 0)
            sizeTest = true;
        else
        {
            cout << "size must be greater than 0" << endl;
            numTest = false;
            sizeTest = false;
        }
    }

    if(triNum == 1)
    {
        for(int i = 0; i < triSize; i++)
        {
            for(int j = 0; j < i + 1; j++)
            {
                cout << '*';
            }
            for(int n = triSize; n > i; n--)
            {
                cout << ' ';
            }
            cout << endl;
        }
    }
    else if(triNum == 2)
    {
        for(int i = 0; i < triSize; i++)
        {
            for(int j = 0; j < i + 1; j++)
            {
                cout << '*';
            }
            for(int n = triSize; n > i; n--)
            {
                cout << ' ';
            }
            for(int m = triSize; m > i; m--)
            {
                cout << '*';
            }
            cout << endl;
        }
    }
    else if(triNum == 3)
    {
        for(int i = 0; i < triSize; i++)
        {
            for(int j = 0; j < i + 1; j++)
            {
                cout << '*';
            }
            for(int n = triSize; n > i; n--)
            {
                cout << ' ';
            }
            for(int m = triSize; m > i; m--)
            {
                cout << '*';
            }
            for(int o = 0; o < i + 1; o++)
            {
                cout << ' ';
            }
            for(int p = 0; p < i; p++)
            {
                cout << ' ';
            }
            for(int l = triSize; l > i; l--)
            {
                cout << '*';
            }
            cout << endl;
        }
    }
    else if(triNum == 4)
    {
        for(int i = 0; i < triSize; i++)
        {
            for(int j = 0; j < i + 1; j++)
            {
                cout << '*';
            }
            for(int n = triSize; n > i; n--)
            {
                cout << ' ';
            }
            for(int m = triSize; m > i; m--)
            {
                cout << '*';
            }
            for(int o = 0; o < i + 1; o++)
            {
                cout << ' ';
            }
            for(int p = 0; p < i; p++)
            {
                cout << ' ';
            }
            for(int l = triSize; l > i; l--)
            {
                cout << '*';
            }
            for(int k = triSize; k > i; k--)
            {
                cout << ' ';
            }
            for(int q = 0; q < i + 1; q++)
            {
                cout << '*';
            }
            cout << endl;
        }
    }
    return 0;
}