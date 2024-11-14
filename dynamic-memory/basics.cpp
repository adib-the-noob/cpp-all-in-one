#include<iostream>
using namespace std;

int main()
{
    int *pNumber = NULL;

    pNumber = new int;

    cout << "The address of PNumber is " << pNumber << endl;
    cout << "The value of PNumber is " << *pNumber << endl;

    cout << "=========================" << endl;

    // assign a value
    *pNumber = 12;

    cout << "The address of PNumber is " << pNumber << endl;
    cout << "The value of PNumber is " << *pNumber << endl;
    
    
    return 0;
}