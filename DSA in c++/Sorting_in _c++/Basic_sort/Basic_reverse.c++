#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n = 5;
    vector<int> v(n);
    
    // Read the elements of the vector
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    // Sort the vector in descending order
    sort(v.begin(), v.end(), greater<int>());
    
    // Print the sorted vector
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
}