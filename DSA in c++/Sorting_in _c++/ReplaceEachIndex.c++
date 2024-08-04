#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
float max( float a, float b){
    if(a>=b) return a;
    else return b;
}
float min( float a, float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int a[4] = { 5, 3, 6, 8};
    int n = 4;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = false;
    for(int i=1;i<=n;i++){
        if(a[i-1]>=a[i]){
            kmin = max(kmin,(a[i-1]+a[i])/2.0);
        }
        else kmax = min(kmax,(a[i-1]+a[i])/2.0);
        if(kmin>kmax){
            flag = true;
            break;
        }
    }
    if(flag) cout<<-1<<endl;
    else{
        if((kmin - (int)kmin)>0){
            kmin = (int)kmin + 1;
        }
    cout<<kmax<<" "<< kmin;
    }
}