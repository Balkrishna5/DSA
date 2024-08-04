#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[] ,int n){
    for(int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr,n);
}


// worst case o(n*2)
//average case o(n*2)
//best case o(n)  -> all element of the array is sorting