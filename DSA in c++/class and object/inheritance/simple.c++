#include<iostream>
#include<string>
using namespace std;

class Vehicle {// base class ,parent class
public:
    int tyreSize;
    int engineSize; 
    int lights;
    string companyName;
    // Vehicle(){  // phle vehicle ka constructor call hau hai
    //     cout<<"vehicle ka constructor call hau "<<endl;
    // }   

    void showCompanyName(){
        cout<<companyName<<endl;
    }
};


class Car : public Vehicle{ //Car inherits Vehicle
public:
    int steeringSize;
};


class Bike : public Vehicle{ //derived class,child class
public:
    int handlingSize;
    // Bike(){ // baad main bike ka constructor call hau hai
    //     cout<<"bike ka constructor call hau "<<endl;
    // }
};

int main(){
    Bike honda;
    honda.handlingSize = 5;
    honda.tyreSize = 23;
    honda.engineSize = 234;
    cout<<honda.tyreSize<<endl;
    honda.companyName = "honda";
    honda.showCompanyName();

}