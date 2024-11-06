#include<iostream>
using namespace std;

int differentApplication();

int main(){
    int i, j;

    // for(i=1; i<=3; i++){
    //     for (j=1; j <= 10; j++){
    //             cout << j << " ";    
    //             // cout << "Happy New year bro!" << endl;
    //     };
    //     cout << endl;
    // };    
    differentApplication();
    return 0;
}


int differentApplication(){
    int number_of_row;
    int number_of_col;
    string symbole;

    cout << "How many rows? ";
    cin >> number_of_row;

    cout << "How many columns? ";
    cin >> number_of_col;

    cout << "Which symbol to user? ";
    cin >> symbole;    

    for(int i=1; i <= number_of_row; i++){
        for (int j=1; j <= number_of_col; j++){
            cout << symbole;
        };
        cout << endl;
    }
    return 0;
};