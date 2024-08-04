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
void change(Student* s){
    s->name = "harsh";
}
int main(){
    Student s("balkrishna",12,56);
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;    
}