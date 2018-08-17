#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 20;
    string fizzBuzz[20];

    for(int i = 0; i < n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
            fizzBuzz[i] = "FizzBuzz";
        else if(i % 3 == 0)
            fizzBuzz[i] = "Fizz";
        else if(i % 5 == 0)
            fizzBuzz[i] = "Buzz";
        else
            fizzBuzz[i] = to_string(i);
    }
}