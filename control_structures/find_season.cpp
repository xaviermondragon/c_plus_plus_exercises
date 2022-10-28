#include <iostream>
using namespace std;


int main()
{
    int month;
    cout << "Enter the month:";
    cin >> month;
    
    if (3 <= month && month <= 5) {
        cout << "Season:Spring";
    } else if (6 <= month && month <= 8) {
        cout << "Season:Summer";
    } else if (9 <= month && month <= 11) {
        cout << "Season:Autumn";
    } else if (12 == month || month <= 2) {
        cout << "Season:Winter";
    } else {
        cout << "Invalid month";
    }
}