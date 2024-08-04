#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node* parent;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root){
    cout << "Enter the data"  << endl;
    int data;
    cin >> data;
    
    if(data == -1){
        return NULL;
    }
    root = new Node(data); 
    cout << "Enter the data for insertinf the left of" << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting the raight of" << endl;
    root->right  = buildTree(root->right);
    return root;
}
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void reverseLevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    stack<Node*> st;
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        st.push(temp);        
        if(temp == NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
        
    }
    while(!st.empty()){
        if(st.top() == NULL){
            cout << endl;
        }
        else {
            cout << (st.top())->data << " ";
            st.pop();
        }
    }

}

void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<< root->data <<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}



void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout << "Enter the data for root node"<<endl;
    int data;
    cin >> data;
    root  = new Node(data);

    q.push(root);

    while(q.empty()){
        Node* temp = q.front();
        q.pop();
        
        cout << "enter the data for left node :" << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if(leftdata != (-1)){
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }

        cout << "enter the data for right node : " << temp->data <<endl;
        int rightdata;
        cin >> rightdata;
        if(rightdata != -1){
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }

    }
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    reverseLevelOrderTraversal( root);
    inorder(root);
    preorder(root);
    postorder(root);
}