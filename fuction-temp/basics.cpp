#include<iostream>
using namespace std;

int max(int x, int y){
    return (x > y) ? x : y;
}

int main()
{
    cout << max(2.1, 2.4);
}