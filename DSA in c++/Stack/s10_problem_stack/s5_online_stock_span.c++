#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 8;
    int arr[] = {100,80,60,81,70,60,75,85};
    int pgi[n];
    pgi[0] = -1;
    stack<int> st;
    st.push(0);
    for(int i = 1; i < n; i++){
        //pop all the element smaller than arr[i]
        while(st.size() > 0  && arr[st.top()] <= arr[i]){
            st.pop();
        } 
        //mark the ans in ans[] array
        if(st.size() == 0) pgi[i] = -1;
        else pgi[i] = st.top();
        //push arr[i];
        st.push(i);
    }
    for(int i = 0; i < n; i++){
        cout<< i - pgi[i] << " "; // pgi ----- previous greatest index
    }
}