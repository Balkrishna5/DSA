// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// int main() {
//     int k = 3;
//     int arr[7] = {6, 5, 3, 2, 8, 10, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);  // Correct size calculation

//     priority_queue<int, vector<int>, greater<int>> pq;  // Min-heap
//     vector<int> v;

//     for (int i = 0; i < n; i++) {
//         pq.push(arr[i]);
//         if (pq.size() > k) {
//             v.push_back(pq.top());
//             pq.pop();  // Maintain only k smallest elements
//         }
//     }

//     while (!pq.empty()) {
//         v.push_back(pq.top());
//         pq.pop();
//     }

   

//     for (auto a : v) {
//         cout << a << " ";
//     }

//     return 0;
// }


//   method --2
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int k = 3;
    int arr[7] = {6, 5, 3, 2, 8, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);  // Correct size calculation

    priority_queue<int, vector<int>, greater<int>> pq;  // Min-heap
     int idx = 0;

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) {
            arr[idx++] = pq.top(); 
            pq.pop();  // Maintain only k smallest elements
        }
    }

    while (!pq.empty()) {
        arr[idx++] = pq.top();
        pq.pop();
    }

    // v now contains the k smallest elements, but in reverse order
    // reverse(v.begin(), v.end());

    for (auto a : arr) {
        cout << a << " ";
    }

    return 0;
}