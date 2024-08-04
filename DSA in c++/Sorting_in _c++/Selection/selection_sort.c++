#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    int a[10] = {6,42,87,0,2,1,5,3,7,2};
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i;j<n;j++){
            if(a[j]<min){
                min = a[j];
                minidx = j;
            }
        }
        swap(a[i],a[minidx]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}