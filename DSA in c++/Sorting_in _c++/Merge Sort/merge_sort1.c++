#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& a , vector<int>& b , vector<int>& res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i<a.size()) while(i<a.size()) res[k++] = a[i++];
    if(j < b.size()) while(j<b.size()) res[k++] = b[j++];

}

int main(){
    int arr[] = {2,5,7,9,10};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {12,34,45,67,90};
    int n2 = sizeof(brr)/sizeof(brr[0]);

    vector<int> a(arr,arr+n1);
    vector<int> b(brr,brr+n2);
    vector<int> res(n1+n2);
    merge(a,b,res);
    for(int i = 0; i < res.size() ; i++){
        cout << res[i] << " ";
    }

}