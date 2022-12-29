#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;
};

Node * CreateNode(int value ){
    Node * news = new Node();
    news->data = value;
    news->left = NULL;
    news->right = NULL;
    return news;
}

void InOrder(Node * root){
    if(root != NULL){
        InOrder(root->left);
        cout<<root->data<<"   ";
        InOrder(root->right);
    }
}

void PreOrder(Node * root){
    if(root != NULL){
        cout<<root->data<<"   ";
        InOrder(root->left);
        InOrder(root->right);
    }
}

void PostOrder(Node * root){
    if(root != NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<"   ";
    }
}

int main(){
    Node * N = CreateNode(10);
    Node * N1 = CreateNode(20);
    Node * N2 = CreateNode(30);
    Node * N3 = CreateNode(40);
    Node * N4 = CreateNode(50);
    Node * N5 = CreateNode(60);
    Node * N6 = CreateNode(70);


    N->left = N1;
    N->right = N2;

    N1->left = N3;
    N1->right = N4;

    N2->left = N5;
    N2->right = N6;




    // Display the Tree using the Inorder Function traverse
    cout<<endl<<endl;
    cout<<"InOrder Function OutPut:  ";
    InOrder(N);
    cout<<endl<<endl;
    cout<<"PreOrder Function OutPut:  ";
    PreOrder(N);
    cout<<endl<<endl;
    cout<<"PostOrder Function OutPut:  ";
    PostOrder(N);
    cout<<endl<<endl;
    return 0;
}




