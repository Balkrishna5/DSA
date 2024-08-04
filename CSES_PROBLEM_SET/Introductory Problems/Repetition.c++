#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    string s;
    cin >> s;
    ll i = 0; 
    ll j = 0;
    ll count = 0;
    bool flag = true;;
    while(i < s.length()){
        if(s[i] == s[j]){
            i++;
        }
        else {
            flag = false;
            count = max(count , i-j);
            j = i;
            i++;
        }
    }
    if(flag) cout << s.length();
    else cout << max(count,i-j) << endl;
}