#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   int arr[n];
   stack<int>st;
   for(int i=0;i<n;i++){
       cin >> arr[i];
   }
   sort(arr,arr+n);
   st.push(arr[0]);
   for(int i=1;i<n;i++){
       if(st.top() != arr[i]){
           st.push(arr[i]);
       }
   }
   cout << st.size() <<endl;
   
   
}