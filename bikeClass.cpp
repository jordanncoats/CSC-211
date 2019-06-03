#include <iostream>

using namespace std;

class Bike{

    private:
        string color;
        int gear;
        double maxSpeed;

    public:

        Bike(){
            color ="Null";
            gear;
            maxSpeed;
        }

        Bike(string color, int gear){
            this->color = color;
            this->gear = gear;
            maxSpeed;
        }

        Bike(string color, int gear, double maxSpeed){
            this->color = color;
            this->gear = gear;
            this->maxSpeed = maxSpeed;
        }


        string getColor(){
            return this->color;
        }

        int getGear(){
            return this->gear;
        }

        double getMaxSpeed(){
            return this->maxSpeed;
        }

        void setColor(string someColor){
            this->color = someColor;
        }


};


int main(){

    //
    Bike myBike("Green", 21, 50.0);
    Bike yourBike("Blue", 8, 10.0);

    cout << myBike.getColor() << endl;
    cout << yourBike.getGear() << endl;
    cout << yourBike.getMaxSpeed() << endl;

    myBike.setColor("Red");

    cout << myBike.getColor() << endl;



    return 0;
}