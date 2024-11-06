#include<iostream>

int main(){
    std::string name;
    
    std::cout << "Enter name?: ";
    std::getline(std::cin, name);

    if (name.length() > 19){
        std::cout << "Your name cant be over 12 character!";
    }else if(name.empty()){
        std::cout << "U didn't putted any name!!";
    }else{
        std::cout << "Welcome!";
    };

    std::cout << "Hello" << name << std::endl;

    // name.clear();
    std::string first_portion;
    first_portion = name.at(0);

    std::cout <<  first_portion << std::endl;
    first_portion.append("@gmail.com");
    std::cout << "Hello ---> " << first_portion << std::endl;

    return 0;

}