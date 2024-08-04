#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(stack<int>& st){
    stack<int> temp;
    while(st.size() > 0 ){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size() > 0){
        cout<< temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
}
void pushBottom(stack<int>& st , int val ,int idx){
     stack<int> temp;
    while(st.size() - idx > 0){
        temp.push(st.top());
        st.pop();
    }
    st.push(70);
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
}

void push_bottom_rec(stack<int>& st, int val, int idx){
    if(st.size() == idx){
        st.push(val);
        return ;
    }
    int x = st.top();
    st.pop();
    push_bottom_rec(st,val,idx);
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushBottom(st,70,3);
    cout<<endl;
    print(st);
    cout << endl;
    push_bottom_rec(st,70,3);
    print(st);
}