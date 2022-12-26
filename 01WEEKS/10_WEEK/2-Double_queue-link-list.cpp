#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
    node * pre;
};
node * head = NULL;
class Queue{
    node * rear;
    node * front;
    Queue(){
        rear = NULL;
        front = NULL;
    }
    bool isEmpty()
    {
        if( head == NULL)
            return true;
        return false; 
    }
    // Get the value from the user
    int Get()
    {
        int v ;
        cout<<"\nEnter the Value _";
        cin>>v;
    }
    // pop function
    void enQueue(){
        node * news = new node();
        if(!news)
            cout<<"No memory Available for new node\n";
        else{
            int n = Get();
            if(head == NULL)
            {
                news->data = n;
                news->next = NULL;
                news->pre = NULL;
                head = news;
                front = news;
            }
            else {
                news->data= n;
                news->next = NULL;

            }
        }

    }
};