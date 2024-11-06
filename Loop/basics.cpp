#include<iostream>

using namespace std;

int main(){
    string user_name;
    while (user_name.empty())
    {
        cout << "Please enter your name! ";
        getline(std::cin, user_name);
    }
       cout << user_name;
       return 0;
}