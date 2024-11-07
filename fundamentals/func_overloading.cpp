#include<iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main()
{
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mashroom");
}


void bakePizza(){
    cout << "Here is your Pizza!\n";
}

void bakePizza(string topping1){
    cout << "Here is you pizza with " << topping1 << endl;
}

void bakePizza(string topping1, string topping2){
    cout << "Here is you pizza with " << topping1 << " and " << "with " << topping2 << endl;
}
