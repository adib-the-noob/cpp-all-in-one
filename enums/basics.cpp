#include<iostream>
using namespace std;

enum Day {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    thruday = 3,
    wednesday = 4,
    friday = 5,
    saturday = 6
};

int main()
{
    Day today = friday;

    switch (today){
        case 0: cout << "It is sunday!\n";
        case 1: cout << "It is Monday!\n";
        case 2: cout << "It is Tuesday!\n";
        case 3: cout << "It is Wednesday!\n";
        case 4: cout << "It is Thrusday!\n";
        case 5: cout << "It is Friday!\n";
        case 6: cout << "It is saturda!\n";
        // case 7: cout << "It is Thrusday!\n";
    }    
}