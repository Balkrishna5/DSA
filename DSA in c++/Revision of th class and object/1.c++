#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    int marks;

    Student( string n, int r, int m){
        rollno = r;
        marks = m;
        name = n;
    }
};
int main(){
    Student s("balkrishna",12,56);
    cout<<s.name<<endl;
    
}