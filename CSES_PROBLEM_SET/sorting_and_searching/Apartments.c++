#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n] , b[m];
    for(int i = 0; i < n;i ++){
        cin >>a[i];
    }
    for(int j = 0; j < m;j++){
        cin >> b[j];
    }
    sort(a, a+n);
    sort(b , b+m);
    int i = 0, j = 0;
    int count = 0;
    while(i<n && j<m){
      if(abs(a[i] - b[j]) <= k) count++,j++,i++;
      else if(a[i] > b[j]) j++;
      else i++;
    }
    cout << count <<endl;
}