#include<iostream>

class Heap{
public:
    vector<int> v;
    int sz = 0;

    int parent(int x){
        return (x-1)/2;
    }

    int leftChild(int x){
        return 2*x + 1;
    }

    int rightChild(int x){
        return 2*x + 2;
    }

    void push(int val){
        int index = sz;
        a.push_back(val);
        sz++;
        while(index != 0){
            if(a[index] > a[parent(index)]){
            swap(a[index] , a[parent(index)]);
            index = parent(index);
            }
            else break;
        }

    }

    int top(){
        if(isEmpty()){
            return INT_MIN;
        }
        return a[0];
    }

    void pop(){
        if(size() == 0)
            return INT_MIN;
        a[0] = a[size() - 1];
        a.pop_bck();
        sz--;
        int index = 0;
        while(true){
            int cur  = a[index];
            int lc = leftChild(index) < sz ? a[leftChild(index)] : INT_MIN;
            int rc = rightChild(index) < sz ? a[rightChild(index)] : INT_MIN;

            int maximum = max(cur, lc, rc);
            if(maximum == cur){
                break;
            }
            if(maximum == lc){
                swap(a[index],a[leftChild(index)]);
                index = leftChild(index);
            }
            if(maximum == rc){
                swap(a[index],a[rightChild(index)]);
                index = rightChild(index);
            }
        }       
    }

    bool isEmpty(){
        return size() == 0;
    }

    int size() {
        return sz;
    }
};