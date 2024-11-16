#include<iostream>
using namespace std;

class Animal{
    public:
        bool alive = true;
    
    void eat(){
        cout << "This animal is eating!" << endl;
    }
};

class Dog : public Animal{

};

int main()
{
    Dog dog1;
    cout << dog1.alive << endl;
    dog1.eat();
}