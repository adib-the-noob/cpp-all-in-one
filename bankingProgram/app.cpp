#include<iostream>
#include<iomanip>

using namespace std;

void showBalance(double balance);
double depositeBalance();
double withdraw(double balance);

int main()
{
    double balace = 0;
    int choice = 0;
    
    do{
        cout << "|=======================|\n";
        cout << "|Enter your choice:     |\n";
        cout << "|=======================|\n";
        cout << "| 1. Show Balance.      |\n";
        cout << "| 2. Deposit Balance.   |\n";
        cout << "| 3. Withdraw Money.    |\n";
        cout << "| 4. Exit               |\n";
        cout << "|=======================|\n";

        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
            case 1: showBalance(balace);
                break;
            case 2:
                balace += depositeBalance();
                showBalance(balace);
                break;
            case 3:
                balace -= withdraw(balace);
                cout << "=======================\n";
                break;
            case 4:
                cout << "=======================\n"; 
                cout << "Thanks for visiting!..\n";
                cout << "=======================\n";
                break;
            default:
                cout << "=======================\n";
                cout << "Invalid Input\n";
                cout << "=======================\n";
                break;
        }
    }while(choice != 4);
    return 0;
}


void showBalance(double balance){
    cout << "=======================\n";
    cout << "Your Balance is $" << setprecision(2) << fixed << balance << endl;
    cout << "=======================\n";
}

double depositeBalance(){
    double amount = 0;
    cout << "Enter the amount. -> ";
    cin >> amount; 
    if (amount < 0){
        cout << "Amount can't be less than 0!\n";
        cout << "=======================\n";
        return 0;
    }
    return amount;
}

double withdraw(double balance){
    double amount = 0;
    cout << "Enter the amount you want to withdraw! -> ";
    cin >> amount;
    if (balance > amount){
        double remaining_balance = balance - amount;
        cout << "Withdrawed amount $" << amount << endl;
        showBalance(remaining_balance);
    }else{
        cout << "Thats not a valid amount!\n";
        return 0;
    };
    return balance;
}