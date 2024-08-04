#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    int a[10] = {5,0,1,2,0,0,4,0,3,6};
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(a[j]==0){
                swap(a[j],a[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}