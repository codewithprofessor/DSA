#include<iostream>
using namespace std;

struct node{ //create a node which have simple 2 variables 1 is
    int data;   //data is variable of int type
    node * next;  //next is pointer which have pointer type
};


int main()
{
    node **head;
    node *one = new node();
    node *two = (node *)malloc(sizeof(node));

    one->data = 10;
    two->data = 10;
    head = &one;one->next= two;
    cout<<one->data<<endl;
    cout<<two->data<<endl;
    return 0;
}