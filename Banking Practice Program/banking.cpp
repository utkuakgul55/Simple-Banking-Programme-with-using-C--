#include <iostream>
#include <iomanip>

using namespace std;


void showBalance(double balance);
double deposit();
double withdraw(double balance);



int main()
{


    double balance = 0;
    int choice = 0;


    do{
    cout << "********************\n";
    cout << "Enter your choice: \n" << endl;
    cout << "********************\n" << endl;

    cout << "1. Show balance \n" << endl;
    cout << "2. Deposit money \n" << endl;
    cout << "3. Withdraw money \n" << endl;
    cout << "4. Exit \n";
    cin >> choice;

    cin.clear();
    fflush(stdin);



    switch(choice){
        case 1: showBalance(balance);
                break;
        case 2: balance = balance + deposit();
                showBalance(balance);
                break;
        case 3: balance = balance - withdraw(balance);
                showBalance(balance);
                break;
        case 4: cout << "Thanks for visiting\n";
                break;
        default: cout << "Invalid choice\n" << endl;
    }


    }while(choice != 4);

    

    return 0;

}




void showBalance(double balance){
        cout << "Your balance is: $" << setprecision(2) << fixed <<  balance << "\n";
}



double deposit(){

    double amount = 0;

    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if(amount > 0)
    {

        return amount;
    }
    else{
        cout << "That's not a valid amount\n";
        return 0;
    }

    
}


double withdraw(double balance){


    double amount = 0;

    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if(amount > balance){
        cout << "insufficient funds";
        return 0;
    }
    else if(amount < 0){
        cout << "That's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }


    
}