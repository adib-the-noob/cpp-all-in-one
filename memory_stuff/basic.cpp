#include<iostream>
using namespace std;

void swap_value(string &x, string &y);

int main() 
{
    string x = "Kool-Aid";
    string y = "Water";

    cout << "X: " << x << " - Address is " << &x <<  endl;
    cout << "Y: " << y << " - Address is " << &y << endl;

    cout << "---VALUE SWAPPING---\n";

    swap_value(x, y);
    cout << "X: " << x << " - Address is " << &x <<  endl;
    cout << "Y: " << y << " - Address is " << &y << endl;


    return 0;
}

void swap_value(string &x, string &y){
    string temp_value;

    temp_value = x;
    x = y;
    y = temp_value;
}