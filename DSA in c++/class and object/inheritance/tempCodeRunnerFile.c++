#include<vector>
#include<string>
using namespace std;

class Vehicle {// base class ,parent class
public:
    int tyreSize;
    int engineSize; 
    int lights;
    string companyName;   
};


class Car : public Vehicle{ //Car inherits Vehicle
public:
    int steeringSize;
};

