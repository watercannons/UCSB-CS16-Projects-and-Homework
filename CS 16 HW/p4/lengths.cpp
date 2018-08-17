#include <iostream>
using namespace std;

int main()
{
    void imperialToMetric(int a,int b,int &c,int &d);
    void metricToImperial(int e,int f,int &g,int &h);

    int choiceInput = 0;
    string convertInput = "";
    int input1 = 0;
    int input2 = 0;
    int return1 = 0;
    int return2 = 0;
    bool valid = false;
    bool exit = false;

    while(exit == false)
    {
        cout << "enter 1 for feet,inches to meters,centimeters, or" << endl;
        cout << "enter 2 for meters,centimeters to feet,inches" << endl;

        while(valid == false)
        {
            cin >> choiceInput;

            if(choiceInput == 1)
            {
                cout << "enter feet and inches" << endl;
                cin >> input1;
                cin >> input2;
                imperialToMetric(input1,input2,return1,return2);
                valid = true;
                cout << "conversion: " << return1 << " meters and " << return2 << " centimeters " << endl;
            }
            else if(choiceInput == 2)
            {
                cout << "enter meters and centimeters";
                cin >> input1;
                cin >> input2;
                metricToImperial(input1,input2,return1,return2);
                valid = true;
                cout << "conversion: " << return1 << " feet and " << return2 << " inches " << endl;
            }
            else
            {
                cout << "enter 1 or 2 only" << endl;
            }
        }
        cout << "convert more?" << endl;
        cin >> convertInput;

        if(convertInput.substr(0,1) != "y")
        {
            exit = true;
        }
        else if(convertInput.substr(0,1) == "y")
        {
            valid = false;
        }


    }


    return 0;
}

void imperialToMetric(int input1, int input2, int &output1, int &output2)
{
    output1 = ((input1 * 12 + input2) * 2.54)/100;
    output2 = ((input1 * 12 + input2) * 2.54) - (output1 * 100);

}

void metricToImperial(int input1, int input2, int &output1, int &output2)
{
    output1 = ((input1 * 100 + input2) * 0.393701) / 12;
    output2 = ((input1 * 100 + input2) * 0.393701) - (output1 * 12);
}