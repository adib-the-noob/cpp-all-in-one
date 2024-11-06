#include<iostream>

int main()
{
    int month;
    std::cout << "Enter the serial number of month! -> ";   
    std::cin >> month;

    switch (month)
    {
    case(1):
        std::cout << "It's Jan";
        break;

    case(2):
        std::cout << "It;s Feb";
        break;
        
    default:
        std::cout << "Hacker is Hacker!";
        break;
    }
}