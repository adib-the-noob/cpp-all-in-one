#include<iostream>
using namespace std;

double getTotal(double price_array[], int size){
    int total = 0; 
    for(int i = 0; i < size; i++){
        total = total + price_array[i];
    }
    return total;
}

int main()
{
    double prices[] = {12.23, 12.43, 34.54};
    int array_length = sizeof(prices) / sizeof(prices[0]);

    double total = getTotal(prices, array_length);
    cout << total << endl;
}