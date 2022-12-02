#include <iostream>
using namespace std;

struct queue{
    int array[5];
    int f;
    int r;
};
void createQueue(queue q)
{
    q.f = -1;
    q.r = -1;
}

bool isEmpty(queue q)
{
    if(q.r== -1 )
        return true;
    else
        return false;
}

bool isFull(queue q)
{
    if(q.r == 4)
    {
        return true;
    }
    if(q.f == 0 )
    {
        return true;
    }

    else 
        return false;
}

void enqueue(queue q, int data)
{
    if(isFull(q))
    {
        cout<<"Your queue is Full now\n";
    }
    else if (q.f != 0 && q.f != q.r )
    {
        q.r = (q.r)% (4);
        q.array[q.r] = data;
        q.r++;
    }
    e
{
    if(isEmpty(q))
        cout<<"YOur Queue is Empty now\n";

    else  
    {
        int a = q.array[q.f];
        q.f++;
        return a;

    }
}



int main()
{
    queue  q;

    // cout<<"Enter the size of Array: ";
    // int size;
    // cin>>size;
    createQueue(q);



    return 0;
}