#include<iostream>

namespace first{
    int x = 1; 
}

namespace second{
    int x = 2;
}

// declard at the top
int differentApproach();
int excludingNativeFunctions();

int main(){
    int x = 0;
    // here :: means scope resolution operator 
    
    // print the primary value of x decleard in main() func
    std::cout << x << std::endl;

    // print the first version of x
    std::cout << first::x << std::endl;

    // print the second version of x
    std::cout << second::x << std::endl;

    differentApproach();
    excludingNativeFunctions();

    return 0;
}


int differentApproach(){
    using namespace first;
    std::cout << "The value of x is rendered from first namespace: " << x << std::endl;
    return 0;
}


int excludingNativeFunctions(){
    using std::cout;

    cout << "Whats up Bro!?";
    return 0;
}