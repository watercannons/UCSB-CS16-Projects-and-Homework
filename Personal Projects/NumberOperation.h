//
// Created by watercannons on 8/18/2018.
//

#ifndef JAVATOC_NUMBEROPERATION_H
#define JAVATOC_NUMBEROPERATION_H
using namespace std;


class numberModifications
{
public:
    double num1;
    double num2;

private:
    int num1Copy = 0;
    int num2Copy = 0;

public:
    void inputData()
    {
        cout << "Enter a number" << endl;
        cin >> num1;
        cout << "Enter another number" << endl;
        cin >> num2;

        num1Copy = (int)num1;
        num2Copy = (int)num2;
    }

    double sum()
    {
        return num1 + num2;
    }

    double difference()
    {
        return num1 - num2;
    }

    double multiplication()
    {
        return num1 * num2;
    }

    double division()
    {
        if(num2 == 0)
            return 0;
        else
            return num1 / num2;
    }

    int gcd()
    {
        int holder = 0;

        if(num2Copy > num1Copy)
        {
            int temp = num2Copy;
            num1Copy = num2Copy;
            num2Copy = temp;
        }

        while(num1Copy > 0)
        {
            if(num1Copy < num2Copy)
            {
                holder = num1Copy;
                num1Copy = num2Copy;
                num2Copy = holder;
            }
            num1Copy = num1Copy - num2Copy;
        }
        return num2Copy;
    }

};

#endif