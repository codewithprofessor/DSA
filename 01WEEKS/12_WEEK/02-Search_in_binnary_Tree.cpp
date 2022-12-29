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

Node * SearchTree(Node * root, int value)
{   
    if(root == NULL)
        return NULL;
    else
    {
        if(root->data == value)
            return root;
        else if(root->data < value)
            return SearchTree(root->right, value);
        else
            return SearchTree(root->left, value);
    }
    return root;
}



int main(){
    // create the veriables of node type and asign them values using function calling
    Node * N = CreateNode(100);
    Node * N1 = CreateNode(20);
    Node * N2 = CreateNode(300);
    Node * N3 = CreateNode(10);
    Node * N4 = CreateNode(50);
    Node * N5 = CreateNode(200);
    Node * N6 = CreateNode(700);


    N->left = N1;
    N->right = N2;

    N1->left = N3;
    N1->right = N4;

    N2->left = N5;
    N2->right = N6;

// Call the SearchTree

Node * root =new Node();
int n;
cout<<"Enter the Node which you want to find!";
cin>>n;
root =  SearchTree(N, n);
if(root == NULL)
    cout<<"value is Not Found!";
else
    cout<<"Value is Found";



    return 0;
}




