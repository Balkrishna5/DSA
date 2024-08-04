#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

int main(){
    int n;
    cin >> n;
    cout << n << " ";
    while( true ){
        if(n == 1) break;
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
        else {
            n*=3;
            n+=1;
            cout<<n<<" ";
        }
    }
}