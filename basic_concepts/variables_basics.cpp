#include<iostream>

int main(){
    // Integer
    int x = 23;
    int y = 4;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // Double
    double price = 10.10;
    double gpa = 2.3;
    double temperature = 98.6;

    // char
    char grade = 'A';
    char initial = 'B';

    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << '\n';
    std::cout << grade << '\n';
    std::cout << initial << '\n';

    // boolean

    bool is_student = true;
    bool is_verified = false;

    std::cout << is_student << '\n';
    std::cout << is_verified << '\n';

    // string
    std::string userName = "Mohammed Adib";
    std::string day = "Friday!";
    std::string userAddress = "123, Cumilla, Bangladesh!";

    std::cout << "Name of the user is " << userName << std::endl;
    std::cout << "Today is " << day << std::endl;
    std::cout << "Who lives in " << userAddress << std::endl;


    return 0;
}
