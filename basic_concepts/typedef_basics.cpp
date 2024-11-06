#include<iostream>
#include<vector>

// typedef std::vector<std::pair<std::string, int>> pairlist; 

typedef std::string str_dt;
typedef int number_dt;

int anotherApproach();

int main(){
    str_dt adib = "hackerOne";
    std::cout << adib << std::endl;

    number_dt adib_roll = 100;
    std::cout << adib_roll << std::endl;

    std::cout << "-----------" << std::endl;
    anotherApproach();
}

// code using using keyword

using int_type = int;
using string_type = std::string;

int anotherApproach(){
    int_type adib_class = 12;
    string_type adib_sub = "HSC";

    std::cout << adib_class << std::endl;
    std::cout << adib_sub << std::endl;

    return 0;
};
