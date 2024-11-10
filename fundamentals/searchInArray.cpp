#include<iostream>
using namespace std;

int searchArray(int array[], int size, int element);

int main()
{  
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int index;
    int myNum;

    cout << "Enter the element search for: ";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);
    
    if (index != -1){
        cout << "Element Found " << index << endl;
    }else{
        cout << "Element not Found " << index << endl;
    }

    return index;

}

int searchArray(int array[], int size, int element){
    for(int i=0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}