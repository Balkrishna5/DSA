#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(stack<int>& st){
    if(st.size() == 0) return ;
    int x = st.top();
    st.pop();
    display(st);
    cout << x << " ";
    st.push(x);
}
void pushBottom(stack<int>& st ,int val){
    if(st.size() == 0){
        st.push(val);
        return ;
    }
    int x = st.top();
    st.pop();
    pushBottom(st , x);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size() == 1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushBottom(st,x);

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    reverse(st);
    display(st);
}