#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{     // user defined data type
public:
    int val;
    Node* next;
};

class Linkedlist{
public:    
    Node* head;
    Node* tail;
    int size = 0;

    Linkedlist(){
        tail = head = NULL;
        size = 0;
    }

    void insertAtBeginning(int val){
        Node* temp = new Node(val);
        if(size == 0){
            tail = head = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtindex(int idx , int val){
        if(idx < 0 || idx>size){
            cout << "invalid index" << endl;
        }
        else if(idx == 0){
            insertAtBeginning(val);
        }
        else if(idx == size ){
            insertAtEnd(val);
        }
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i= 1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }        
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if( size == 0){
            tail = head = temp;
        }
        else {
            tail->next = temp;
            tail = tamp;
        }
        size += 1;
    }

    void deleteAtBeginning(){
        if( size == 0){
            cout << "list is empty" ;
            return ;
        }
        head = head->next;
        size--;
    }

    void deleteAtindex( int idx ){
        if( idx > size || idx < 0){
            cout << "Invalid index";
        }
        else if( idx == 0 ){
            deleteAtBeginning();
        }
        else if( idx == size - 1){
            deleteAtEnd();
        }
        else{
            Node* temp = head;
            for(int i=1;i<=idx - 1;i++){
                temp = temp->next;
            }  
            temp->next = temp->next->next;    
            size--;      
        }
    }

    void deleteAtEnd(){
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }


    void display(){
        Node* temp = head;
        while( temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }


};

int main(){
    Linkedlist ll;
    insertAtEnd(10);
    display();
    insertAtEnd(20);
    display();
}
  