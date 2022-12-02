#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void start(node* hello)
{
    int n;
    cout<<"Enter the number which you want to enter: ";
    cin>>n;

    // node* new_node = new node();
    // new_node->data = n;
    // new_node->next = hello;
    // hello = new_node;


}

int main()
{
    node **head;
    start(* head);
    return 0;
}