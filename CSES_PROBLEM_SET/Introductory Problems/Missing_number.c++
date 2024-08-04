#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int missing = 1; // The first missing integer to check
    for(int i = 0; i < n; i++) {
        if(arr[i] != missing) {
            cout << missing << endl;
            return 0;
        } else {
            missing++;
        }
    }

    // If all integers from 1 to n are present, the missing integer is n+1
    cout << missing << endl;

    return 0;
}