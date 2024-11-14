#include<iostream>
using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age;

        void eat(){
            cout << "This person is eating!\n";
        }
};

int main()
{
    Human human1;

    human1.name = "ADIB";
    human1.occupation = "Scientist";
    human1.age = 40;

    human1.eat();

    cout << human1.name << " " << human1.occupation << endl;
}