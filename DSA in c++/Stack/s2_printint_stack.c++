#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //printing the stack in reversing order ->>> basically emptying the stack
    while(st.size() > 0){
        cout << st.top() << " ";
        st.pop();
    }
}
