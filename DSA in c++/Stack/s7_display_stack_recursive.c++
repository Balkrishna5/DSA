#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void displayrev(stack<int>& st){//reverse
    if(st.size() == 0) return ;
    int x = st.top();
    cout<< x << " ";
    st.pop();
    displayrev(st);
    st.push(x);
}
void display(stack<int>& st){ //bottom to top
    if(st.size() == 0 ) return ;
    int x = st.top();
    st.pop();
    display(st);
    cout << x << " ";
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);     
    st.push(50);
    displayrev(st);    
    cout << endl;  
    display(st); 
}