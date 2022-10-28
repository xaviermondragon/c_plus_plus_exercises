#include <iostream>
using namespace std;


int main()
{
    int size, result = 0;
    
    cout << "Enter the size of an array:";
    cin >> size;
    
    if (size <= 0) {
        cout << "Invalid array size";
        return 0;
    }
    
    cout << "Enter the array elements:" << endl;
    int numbers[size];
    
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    
    
    for (int i = 0; i < size; i++) {
        int number = numbers[i];
        if (number < 10 && number % 2 == 0) {
            if (numbers == 0) {
                result = number;
            } else {
                result = 10*result + number;
            }
        }
    }
    
    if (result == 0) {
        cout << "Single digit even number is not found in the array";
    } else {
        cout << result;
    }
    return 0;
}