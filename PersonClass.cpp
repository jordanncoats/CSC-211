#include <iostream>
using namespace std;

class Person{

    protected:
        string name;
        string faveColor;
        int age;
        double height;

    public:

    Person(){
        this->name = "";
        this->faveColor = "";
        this->age = 0;
        this->height = 0.0;
    }

    Person(string someName, string someColor, int someAge, double someHeight){
        this->name = someName;
        this->faveColor = someColor;
        this->age = someAge;
        this->height = someHeight;
    }

    void setColor(string newColor){
        this->faveColor = newColor;
    }

    void setAge(int newAge){
        this->age = newAge;
    }

    void setHeight(double newHeight){
        this->height = newHeight;
    }

    string getName(){
        return this->name;
    }

    string getColor(){
        return this->faveColor;
    }

    int getAge(){
        return this->age;
    }

    double getHeight(){
        return this->height;
    }

};

int main(){

    Person johnDoe("John", "Yellow", 32, 5.5);
    Person sallyDoe("Sally", "Blue", 30, 5.3);

    cout << "My name is " << johnDoe.getName() << " my favorite color is " << johnDoe.getColor() <<
    ". I'm " << johnDoe.getAge() << " years old and am " << johnDoe.getHeight() << " feet tall!" << endl;

    cout << "My name is " << sallyDoe.getName() << " my favorite color is " << sallyDoe.getColor() <<
    ". I'm " << sallyDoe.getAge() << " years old and am " << sallyDoe.getHeight() << " feet tall!" << endl;


    return 0;

}

