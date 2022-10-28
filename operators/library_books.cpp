#include <iostream>
#include<string>
using namespace std;


int main()
{
    string book, author;
    std::cout << "Enter two strings:" << std::endl;
    std::cin >> book;
    cin >> author >> book;
    cout << book + " book was written by " + author << endl;
}