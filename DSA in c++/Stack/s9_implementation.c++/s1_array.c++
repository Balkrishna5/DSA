#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    int arr[10];
    int idx;

    Stack(){
        this->idx = -1;
    }

    void push(int val){
        if(idx == 9){
            cout<<"stack is full"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if( idx == -1){
            cout<<"stack is empty"<<endl;
            return ;
        }
        idx--;
    }

    int top(){
        if( idx == -1){
            cout<<"stack is empty"<<endl;
            return ;
        }
        return arr[idx];
    }

    int size(){
        return idx+1;
    }

};
int main(){
    Stack st;
    st.push(10);
    st.push(30);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size()<<endl;;

}