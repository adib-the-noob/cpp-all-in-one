#include<iostream>
using namespace std;

int main()
{
    int *pointer = nullptr;
    int x = 123;

    // pointer = &x;

    if (pointer == nullptr){
        cout << "Address wasn't assinged!" << endl;
    }else{
        cout << "address was assigned! " << pointer << endl;
    }
}