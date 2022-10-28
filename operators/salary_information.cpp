#include <iostream>
using namespace std;


int main()
{
    int employeeID, workingHours, salaryAmountPerHour;
    std::cout << "Input the Employee ID:";
    std::cin >> employeeID;
    cout << "Input the working hrs:";
    cin >> workingHours;
    cout << "Salary amount/hr:";
    cin >> salaryAmountPerHour;
    cout << "Employee ID=" << employeeID << std::endl;
    cout << "Salary=" << workingHours*salaryAmountPerHour << std::endl; 
}