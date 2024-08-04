#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
        for (ll i = 2; i <=n; i+=2) 
            cout << i << " ";
        for (ll i = 1; i <= n; i+=2)
            cout << i << " ";
        
    
    cout << endl;

    return 0;
}