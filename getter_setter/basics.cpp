#include<iostream>
using namespace std;

class Stove{
    private:
        int temperature = 0;
    public:
    
    int getTemp(){
        return temperature;
    };
    void setTemp(int temperature){
        if (temperature < 0){
            temperature = 0;
        }else if(temperature > 10){
            temperature = 10;
        }
        this -> temperature = temperature;
    }
};

int main()
{
    Stove stove1;
    cout << stove1.getTemp() << endl;

    stove1.setTemp(23);
    cout << stove1.getTemp() << endl;


    stove1.setTemp(-3);
    cout << stove1.getTemp() << endl;


}