#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    int marks;

    Student( string name, int rollno, int marks){
        this->rollno = rollno;
        this->marks = marks;
        this->name = name;
    }
};
int main(){
    Student s("balkrishna",12,56);
    Student* ptr = &s;
    cout<<s.name<<endl;
    //(*ptr).name = "harsh";
    ptr->name = "harsh"; // above is same as the written 
    cout<<s.name<<endl;
    
}