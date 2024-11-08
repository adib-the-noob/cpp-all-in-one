#include <iostream>
using namespace std;

int main()
{
    string students[] = {"Adib", "Abir", "Arosh"};
    // int array_length = sizeof(students) / sizeof(students[0]);
    int array_length = sizeof(students) / sizeof(string);

    for (int i = 0; i < array_length; i++){
        cout << students[i] << '\n';
    }

    cout << "========ForEach============" << endl;
    for(string student: students){
        cout << student << endl;
    }

    cout << "========ForEach - Grades============" << endl;
    int grades[] = {54, 45, 34, 23};

    for (int grade: grades){
        cout << grade << endl;
    }

}