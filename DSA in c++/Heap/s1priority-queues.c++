#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(12);
    pq.push(30);
    pq.push(50);
    cout<< pq.top() << endl;
    pq.pop();
    pq.push(80);
    cout<< pq.top() << endl;

}