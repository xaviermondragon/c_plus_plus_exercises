#include <iostream>
using namespace std;


int main()
{
    int numberOfTickets;
    char refreshments, coupon, typeOfSeat;
    double singleTicketCost, totalCost;
    
    
    cout <<  "Enter the number of tickets [a minimum of 5 to a maximum of 40 tickets]:";
    cin >> numberOfTickets;
    if (numberOfTickets < 5 || numberOfTickets > 40) {
        cout << "Minimum of 5 and Maximum of 40 Tickets";
        return 0;
    }
    
   
    cout <<  "Do you want refreshments?:";
    cin >> refreshments;
    cout <<  "Do you have a special coupon?:";
    cin >> coupon;
    cout <<  "Enter the type of seat [Classic / Premiere]:";
    cin >> typeOfSeat;
    
    switch(typeOfSeat) {
        case 'c': 
            singleTicketCost = 75;
            break;
        case 'p': 
            singleTicketCost = 150;
            break;
        default:
            cout << "Invalid Input";
            return 0;
    }
    
 
    if (numberOfTickets > 20) {
        //discount = 0.1;
        singleTicketCost *= 0.9;
    }
    
    
    switch(coupon) {
        case 'y': 
            //discount += 0.02;
            singleTicketCost *= 0.98;
            break;
        case 'n': 
            break;
        default:
            cout << "Invalid Input";
            return 0;
    }
    
    switch(refreshments) {
        case 'y': 
            singleTicketCost += 50;
            break;
        case 'n': 
            break;
        default:
            cout << "Invalid Input";
            return 0;
    }
    
    
    totalCost = singleTicketCost*numberOfTickets;
    
    cout << "Ticket cost:" << totalCost;
}