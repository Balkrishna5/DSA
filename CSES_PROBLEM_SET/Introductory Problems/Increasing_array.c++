#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0 ;i < n ;i ++){
        cin >> arr[i];
    }
    ll diff;
    ll count = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            diff = arr[i-1] - arr[i];
            count+=diff;
            arr[i]+=diff;
        }
        else continue;
    }
    cout << count << endl;
}