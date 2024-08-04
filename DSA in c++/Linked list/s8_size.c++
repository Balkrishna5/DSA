#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL; // Correctly initialize the next pointer to nullptr
    }    
};

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sizeNode(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp != NULL){
        temp = temp->next;
        n++;
    }
    cout << n << endl;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    // Link the nodes
    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    sizeNode(a);

    
}
