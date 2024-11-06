#include<iostream>

int main()
{
    int age;

    std::cout << "Your age? ";
    std::cin >> age;

    if (age == 18){
        std::cout << "Kire Mama!" << std::endl;
    } 
    else if(age < 18){
        std::cout << "You are not allowed!" << std::endl;
    }else{
        std::cout << "Nice and attractive" << std::endl;
    }

    return 0;
}