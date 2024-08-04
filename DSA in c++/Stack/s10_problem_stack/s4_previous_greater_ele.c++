#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 8;
    int arr[] = {3,1,2,5,4,6,2,3};
    int ans[n];
    ans[0] = -1;
    stack<int> st;
    st.push(arr[n-1]);
    for(int i = 1; i < n; i++){
        //pop all the element smaller than arr[i]
        while(st.size() > 0  && st.top() <= arr[i]){
            st.pop();
        }
        //mark the ans in ans[] array
        if(st.size() == 0) ans[i] = -1;
        else ans[i] = st.top();
        //push arr[i];
        st.push(arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout<< ans[i] << " ";
    }
}