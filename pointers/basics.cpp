#include<iostream>
using namespace std;

int main()
{
    string name = "adib";
    int age = 12;
    string foods[5] = {"pizza", "Hacker", "Alo"};

    string *pointerName = &name;
    int *pAge = &age;
    string *pFoodsArray = foods;
    
    cout << *pointerName << endl;
    cout << *pAge << endl;
    cout << "Food list====" << endl;
    cout << *pFoodsArray << endl;
}