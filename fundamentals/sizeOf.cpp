#include<iostream>
using namespace std;

int main()
{
    string name = "ADIB";
    double gpa = 2.4;
    char grade = 'F';
    bool is_student = true;

    char grades[] = {'A', 'B', 'C', 'D'}; // 1x4
    string students[] = {"adib", "alex", "HACKER"};

    cout << sizeof(double) << endl;
    cout << sizeof(name) << endl;
    cout << sizeof(grade) << endl;
    cout << sizeof(is_student) << endl;
    cout << sizeof(grades) << endl;

    cout << "---------------------" << endl; 
    cout << sizeof(students) / sizeof(string) << endl;
}