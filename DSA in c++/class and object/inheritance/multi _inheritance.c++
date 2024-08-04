#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A {
private : // can't access from outside , can't be inherited
    int  a_ka_private;
protected:
    int a_ka_protected;
public :
    int a_ka_public;
};

class B : protected  A{ // a_ka_protected ,a_ka_public as protected
public:
    int b_ka_public;

    void show(){
        a_ka_protected = 10;
    }
};

class C : public B{ // a_ka_protected ,a_ka_public as protected,b_ka_public as public
public:
    int c_ka_public;

    void show(){
        a_ka_protected;
    }
};


int main(){
    C c;
    
}