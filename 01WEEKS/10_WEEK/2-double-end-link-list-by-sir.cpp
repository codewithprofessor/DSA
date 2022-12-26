#include <iostream>
#include <stdio.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
node *createnode(int data)
{
    node *newnode = new node();
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = data;
    return newnode;
}
class DEQUEUE
{
    node *front;
    node *rear;
    int size;

public:
    DEQUEUE()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }
    // Functions
    bool isempty();
    void insertatfront(int);
    void insertatrear(int);
    int delatfront();
    int delatrear();
    int Size();
};
bool DEQUEUE::isempty()
{
    if (size == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int DEQUEUE::Size()
{
    return size;
}
void DEQUEUE::insertatfront(int val)
{
    node *nnode = createnode(val);
    if (front == NULL)
    {
        front = rear = nnode;
    }
    else
    {
        nnode->next = front;
        front->prev = nnode;
        front = nnode;
    }
    size++;
    cout << nnode->data;
    cout << "inserted at front" << endl;
}
void DEQUEUE::insertatrear(int val)
{
    node *newnode = createnode(val);
    if (rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        newnode->prev = rear;
        rear = newnode;
    }
    size++;
    cout << newnode->data;
    cout << " inserted at rear" << endl;
}
int DEQUEUE::delatfront()
{
    if (isempty())
    {
        cout << "Queue is EMpty" << endl;
    }
    else
    {
        node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        else
            front->prev = NULL;
        free(temp);
        size--;
        cout << "Deleted";
    }
}
int DEQUEUE::delatrear()
{
    if (isempty())
        cout << "Empty" << endl;
    else
    {
        node *temp = rear;
        rear = rear->prev;
        // If only one element was present in the deque.
        if (rear == NULL)
            front = NULL;
        else
            rear->next = NULL;
        free(temp);
        size--;
        cout << " deleted" << endl;
    }
}
int main()
{
    DEQUEUE d1;
    d1.delatfront();
    d1.delatrear();
    d1.insertatfront(1);
    d1.insertatrear(2);
    d1.insertatfront(3);
    d1.insertatrear(4);
    d1.insertatfront(5);
    d1.insertatrear(6);
    d1.insertatfront(7);
    d1.insertatrear(8);
    d1.delatrear();
    d1.delatfront();
}