#include <iostream>
using namespace std;


int main()
{
    char letter;
    int asciiValue;
    
    std::cout << "Enter the letter" << std::endl;
    std::cin >> letter;
    asciiValue = int(letter);
    if ((65 <= asciiValue && asciiValue <= 90) or (97 <= asciiValue && asciiValue <= 122)) {
     cout << letter << "-" << asciiValue;
    }
    else {
        cout << "Invalid" << endl;
    }
}