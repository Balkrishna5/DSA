#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A {
public :
    int a_ka_public;
    void show(){
        cout<<"mai A ka hua"<<endl;
    }
};

class B : public  A{ 
public:
    int b_ka_public;

    void show(){
        cout<< "mai b hu"<<endl;
    }
};




int main(){
    A *a;
    B b;
    a = &b;
    a->show();
    
}