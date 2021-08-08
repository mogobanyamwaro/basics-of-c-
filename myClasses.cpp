#include <iostream>
using namespace std;

class Car {
    public:
        string Name;
        string Color;
        double Price;

        Car(string name,string color,double price){
            Name = name;
            Color = color;
            Price = price;
        };

        void getInfo(){
    cout <<Color<<endl;
    cout << "\n"<<endl;
    cout <<Name<<endl;
    cout << "\n"<<endl;
    cout <<Price<<endl;
        }
};
class FlyCar: public Car{

};

int main()
{

    Car mycar1("Ford","red",40000);
    Car mycar2("Ferarri","blu",30400348);

    

    mycar1.getInfo();
    mycar2.getInfo();
}