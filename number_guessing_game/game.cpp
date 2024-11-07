#include<iostream>
using namespace std;

int main(){
    int number, guess, tries;

    srand(time(NULL));
    number = (rand() % 100) + 1;

    cout << "-------Number Guessing game-------";
    do{
        cout << "Enter the number, limit is 1-100: ";
        cin >> guess;
        tries = tries + 1;
        
        if (guess > number){
            cout << "Too High!\n";
            // tries = tries + 1;
        }else if (guess < number){
            cout << "Too low!\n";
            // tries = tries + 1;
        }else{
            cout << "CORRECT! The number is " << number << " - Tried" << tries; 
        }
    }while (guess != number);
    return 0;
}   