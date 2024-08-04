#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:    
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};
void display(Node* head){   //O(1) space time complexity;
    while(head){
        cout << head->val << " ";
        head = head->next;
    }
}
void display(Node* tail){   //O(1) space time complexity;
    while(tail){
        cout << head->val << " ";
        tail = head->tail; //d must be pass    reversing the dll
    }
}
void dispalyrec(Node* head){ // O(n)  space complexity in recurrion fxn  reversing dll
    if(head == NULL) return ;
    dispalyrec(head->next);
    cout << head->val << " ";
}
void dispalyrec(Node* head){ // O(n)  space complexity in recurrion fxn
    if(head == NULL) return ;
    cout << head->val << " ";
    dispalyrec(head->next);
    
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    dispalyrec(a);
}