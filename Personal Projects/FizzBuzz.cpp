//This program prints out all integers between 0 to n
//If any number between 0 to n that's:
//      A factor of 3 and 5: Prints "FizzBuzz"
//      A factor of only 3: Prints "Fizz"
//      A factor of only 5: Prints "Buzz"

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
