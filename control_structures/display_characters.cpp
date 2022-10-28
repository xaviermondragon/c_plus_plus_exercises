#include <iostream>
using namespace std;


int main()
{
    int length = 4;
    int digits[length];
    std::cout << "Enter the digits:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cin >> digits[i];
    }
    for (int i = 0; i < length; i++) {
        int digit = digits[i];
        if ((65 <= digit && digit <= 90) || (97 <= digit && digit <= 122)) {
            cout << digit << "-" << char(digit) << endl;
        }
    }
}