#include <iostream>
using namespace std;


int main()
{
    int numberOfSemesters;
    
    cout << "Enter number of semesters:" << endl;
    cin >> numberOfSemesters;
    int minimumMarks[numberOfSemesters];
    
    for(int i = 1; i <= numberOfSemesters; i++) {
        int numberOfSubjects;
        cout << "Enter number of of subjects in semester " << i << ":" << endl;
        cin >> numberOfSubjects;
        
        cout << "Marks obtained in semester 1:" << endl;
        int minimumMark = 100;
        
        for(int j = 1; j <= numberOfSubjects; j++) {
            int actualMark;
            cin >> actualMark;
            
            if(actualMark < 0 || 100 < actualMark) {
                cout << "You have entered invalid mark";
                return 0;
            }
            
            if(actualMark < minimumMark) {
                minimumMark = actualMark;
            }
        }
        
        minimumMarks[i - 1] = minimumMark;
    }
    
    for(int i = 1; i <= numberOfSemesters; i++) {
        cout << "Minimum mark in semester " << i << ":" << minimumMarks[i - 1] << endl;
    }
    
    return 0;
}