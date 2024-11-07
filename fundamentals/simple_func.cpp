#include<iostream>
using namespace std;

double total_area(double length);
double volume(double length, double height);

int main()
{
    int one_side;
    int height;

    one_side = 12;
    height = 2;

    int area = total_area(one_side);
    int vol = volume(12, 2);

    cout << "Total area is " << area << endl;
    cout << "Total volume is " << vol << endl;

    return 0;
}

double total_area(double length)
{
    double area = length * length;
    return area;
}

double volume(double length, double height){
    double total_vol = total_area(length) * height;
    return total_vol;
}

