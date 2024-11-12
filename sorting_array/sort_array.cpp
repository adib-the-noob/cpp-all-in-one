#include<iostream>
using namespace std;

void sortArray(int array[], int size);

int main()
{
    int array[] = {10, 2, 5, 3, 6, 7, 4, 9};
    int size = (sizeof(array) / sizeof(array[0]));

    sortArray(array, size);
    
    for (int element : array){
        cout << element << " ";
    }


    return 0;
}

void sortArray(int array[], int size){
    int temp_container;
    for (int i; i < size - 1; i++){
        for (int j; j < size - i - 1;j++){
            if (array[j] < array[j + 1]){
                temp_container = array[j];
                array[j] = array[j+1];
                array[j+1] = temp_container; 
            }
        }
    }
    cout << array;
}