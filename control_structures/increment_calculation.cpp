#include <iostream>
using namespace std;


int main()
{
    int salary;
    float appraisal;
    std::cout << "Enter the salary" << std::endl;
    std::cin >> salary;
    cout << "Enter the Performance appraisal rating" << endl;
    cin >> appraisal;
    
    if (salary <= 0) {
        cout << "Invalid Input";
    } else {
        if (1 <= appraisal && appraisal <= 3) {
        cout << salary*1.1;
            
        } else if (3 < appraisal && appraisal <= 4) {
        cout << salary*1.25;
            
        } else if (4 < appraisal && appraisal <= 5) {
        cout << salary*1.3;
            
        } else {
        cout << "Invalid Input";
        }
    }
    
}