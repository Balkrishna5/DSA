#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >>k;
        vector<int> v;
        for(int i = 2; i <= n; i += 2){
            v.push_back(i);
        }
        for(int i = 1; i <= n; i+=2){
            v.push_back(i);
        }
        cout << v[k-1] << endl;
        
    }
}