#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(Node* root){
    if(root == NULL) return ;
    cout << root->data << " ";
    display(root->left);
    display(root->right);
}


int sumOfTree(Node* root){
    if(root == NULL) return 0 ;
    return root->data + sumOfTree(root->left) + sumOfTree(root->right);
}

int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int maxValue(Node* root){
    if(root == NULL) return INT_MIN;
    return max(root->data, max(maxValue(root->left), maxValue(root->right)) );
}

int level(Node* root){
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}

int height(Node* root){
    return level(root) - 1;
}

int main(){
    Node* a = new Node(1); //root
    Node* b = new Node(2);
    Node* c  = new Node(3);
    Node* d  = new Node(4);
    Node* e = new Node(5);
    Node* g = new Node(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = g; 
    display(a);
    cout << endl;
    int z = sumOfTree(a);
    cout<< z  << endl;
    int q = size(a);
    cout << q << endl;
    int w = maxValue(a);
    cout << w << endl;
    int l = level(a);
    cout << l << endl;
    int h = height(a);
    cout << h << endl;
}
