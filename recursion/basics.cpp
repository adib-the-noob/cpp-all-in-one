#include<iostream>
using namespace std;

void walk(int steps);

int main()
{
    walk(100);
}

void walk(int steps){
    for (int i=0; i < steps; i++){
        cout << "You walked a step!" << endl;
    }
}