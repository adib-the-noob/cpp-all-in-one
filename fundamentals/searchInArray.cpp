#include<iostream>
using namespace std;

int searchArray(string array[], int size, string element);

int main()
{  
    // int numbers[] = {1, 2, 3, 4, 5, 6};
    string given_array[] = {"pizza", "hamburger", "hacker"};
    int size = sizeof(given_array) / sizeof(given_array[0]);

    int index;
    string element_name;

    cout << "Enter the element search for: ";
    cin >> element_name;

    index = searchArray(given_array, size, element_name);
    
    if (index != -1){
        cout << "Element Found " << index << endl;
    }else{
        cout << "Element not Found " << index << endl;
    }

    return index;

}

int searchArray(string array[], int size, string element){
    for(int i=0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}