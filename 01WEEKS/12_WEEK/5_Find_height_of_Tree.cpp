#include<iostream>
using namespace std;

struct node {
    int data;
    node * left, * right;
};

class tree{
    node * root; 
    tree(){
        root = NULL;
    }
    public:
    int GetValue(){
        cout<<"Etner the Value: ";
        int n;
        cin>>n;
        return n;
    }

    void Insertion(){
        node * temp = root;
        node * news = new node(); 
        if(!news)
            cout<<
        if(root == NULL){
            news->data = GetValue();
        

        }
    }
};