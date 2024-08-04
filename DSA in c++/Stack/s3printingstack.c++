#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //printing the stack in reversing order ->>> basically emptying the stack ->>top to bottom 
    while(st.size() > 0){
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    cout << endl;
    //bottom to top
    while(temp.size() > 0){
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl << st.top();
}