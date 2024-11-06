#include<iostream>

typedef std::string string_dt; 
typedef int number_dt;

int main()
{
    string_dt name;
    number_dt age;
    
    std::cout << "what's your name? : ";
    std::getline(std::cin, name);
   
    std::cout << "what's your age? : ";
    std::cin >> age;

    std::cout << "hello, " << name << std::endl ;
    std::cout << "Age is : " << age << std::endl;

    return 0;
}