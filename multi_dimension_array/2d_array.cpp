#include<iostream>
using namespace std;

int main()
{
    string cars[][3] = {{
        "Chevy", "Camaro", "Corvette"
    }, {
        "Ford", "Mustang", "F-150"
    }};

    int row = sizeof(cars) / sizeof(cars[0]);
    int column = sizeof(cars) / sizeof(cars[0][0]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << cars[i][j] << '\n';
        }
        
    }

    cout << cars[0][0] << " " << cars[0][1] << " " << cars[0][2] << endl;
}