#include<iostream>
using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    string temp;

    for(int i=0; i < size; i++){
        cout << "Enter the food name(add upto 5)[press q to quite]-> " << i + 1 << " ";
        getline(cin, temp);
        if(temp == "q"){
            break;
        }else{
            foods[i] = temp;
        }
    }   

    cout << "You like the following foods:\n";
    for (string food: foods){
        cout << food << endl;
    }
    return 0;
}