// ATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void showMenu() {
    cout << "**********MENU**********"<< endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;

}


int main()
{
    int option;
    double balance = 500;

    showMenu();

    cout << "Option: ";
    cin >> option;


    switch (option) {
    case 1:
        cout << "Balance is: " << balance << "$" << endl; 
        break;
   
    case 2:
        cout << "Deposit Amount: ";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
        break;
    case 3:
        cout << "Withdraw Amount: ";
        double withDrawAmount;
        cin >> withDrawAmount;
;        if (balance > withDrawAmount) {     
            balance -= withDrawAmount;
        }
        else {
            cout << "Insufficient funds";
        }
        break;
        
    }
}


