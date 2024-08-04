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
    
    A(){
        cout<<" A ka constructor call hua! "<<endl;
    }
};

class B : protected  A{ // a_ka_protected ,a_ka_public as protected
public:
    int b_ka_public;
    B(){
        cout<<" B ka constructor call hua! "<<endl;
    } 
};

class C : protected  B{ 
public:
    int c_ka_public;
    C(){
        cout<<" C ka constructor call hua! "<<endl;
    } 
};




int main(){
    C c;// output 'A ka constructor call hua! 
        //B ka constructor call hua!
        //C ka constructor call hua!'  because c is the grandson of the A therefore first A will proint then B and at the last C will print 
    
    
}