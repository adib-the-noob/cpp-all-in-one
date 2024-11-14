#include<iostream>
using namespace std;



struct Student{
    string name;
    double gpa;
    bool enrolled;
};

void printStudent(Student &student){
    std::cout << student.name << endl; 
    std::cout << student.gpa << endl;
    std::cout << student.enrolled << endl;
}


int main(){
    Student student1;
    
    student1.name = "ADIB";
    student1.gpa = 2.3;
    student1.enrolled = true;

    printStudent(student1);

};


