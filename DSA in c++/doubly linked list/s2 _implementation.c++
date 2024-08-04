#include<iostream>
#include<bit/stdc++.h>
using namespace std;

class Node(
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = next;
        this->prev = prev;
    }
)
class Dll{
public:
    Node* head;
    Node* tail;
    int size;

    Dll(){
        head = tail = NULL;
        size = 0;
    }  
    void insrtAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
        size++;
    }  

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = tail;
            head = temp;
        }
        size++;
    }
    void insertAtIndex(int idx, int val){
        if( idx < 0 || idx > size)  cout << "invalid index" << "\n";
        else if( idx == 0) return insertAtHead(val);
        else if(idx == size - 1) return insrtAtTail(val);
        else {
            Node* t = new Node(t);
            Node* temp = head;
            for(int i = 1; i <= idx - 1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;            
        }
    }
    void deleteAtHead() {
        if (size == 0) {
            cout << "List is Empty!" << '\n';
            return;
        } 
        else if (size == 1) {
            head = tail = NULL;
        } 
        else {
            Node* temp = head;
            head = head->next;
            head->prev = NULL;            
        }
        size--;
    }

    void deleteAtTail(){
        if(size == 0){
            cout << "list is empty!" << "\n";
        }
        else if(size == 1){
            haed = tail = NULL;
        }        
        else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            tail = temp;
            temp->next = NULL;
        }
        size--;
    }
    void deleteAt(int idx){
        if( idx < 0 || idx > size)  cout << "invalid index" << "\n";
        else if( idx == 0) return ideleteAtHead();
        else if(idx == size - 1) return deleteAtTail();   
        else {
            Node* temp = head;
            for(int i = 1; i <= idx - 1; i++ ){
                temp = temp->next;
            }
            temp->next=temp->next->next;
            temp->next->next->prev = temp;
            size--;
        }     
    }
}