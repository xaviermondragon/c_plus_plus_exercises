#include <iostream>
#include<string>
using namespace std;


int main()
{
    string input;
    int firstDigit, lastDigit;
    
    cin >> input;
    firstDigit = int(input[0]) - int('0');
    lastDigit = int(input[input.length() - 1]) - int('0');
    
    cout <<  firstDigit * lastDigit;
}