#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl; // Add newline at the end for better readability
}

void insertAtEnd(Node* head, int val){
    Node* e = new Node(val);
    
    // Traverse to the end of the list
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = e;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    display(a);

    insertAtEnd(a, 50); // Changed value to 50 to distinguish new insertion
    display(a);

    // Freeing up the allocated memory (optional but good practice)
    delete a;
    delete b;
    delete c;
    delete d;

    return 0;
}