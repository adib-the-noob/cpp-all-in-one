#include<iostream>
#include<cmath>

int main()
{   
    double x, y, z;

    x = 12.23;
    y = 34.34;

    double whoIsMax;
    double whoIsMin;

    whoIsMax = std::max(x, y); 
    whoIsMin = std::min(x, y);

    std::cout << whoIsMax << std::endl;
    std::cout << whoIsMin << std::endl;

    // doing power
    int power_res = pow(2, 3);
    std::cout << power_res << std::endl;

    // square root
    int sqrt_rt = sqrt(9);
    std::cout << sqrt_rt << std::endl;

    // printing absolute value
    int absoluteVal = abs(-3); // will return the plus value
    std::cout << absoluteVal << std::endl;

    // print the rounded value
    int new_x = round(x);
    std::cout << new_x << std::endl;

    // printing the ceil val of x
    int new_ceil_x = ceil(x);
    std::cout << new_ceil_x << std::endl;

    // the floor val of x
    int new_floor_x = floor(x);
    std::cout << new_floor_x << std::endl;
    
    return 0;
}   