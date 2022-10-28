#include <iostream>
int main()
{
    int income;
    int oneDaySalary;
    
    std::cout << "Enter annual income(in dollar)=";
    std::cin >> income;
    oneDaySalary = income / 365;
    std::cout << "One day salary(in dollar)=" << oneDaySalary << std::endl;
}