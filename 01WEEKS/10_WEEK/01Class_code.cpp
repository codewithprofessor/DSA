#include<iostream>
#define size 5
using namespace std;

class Queue{
    int array[5];
    int rear;
    int front;
    public:
    Queue(){
        rear = -1;
        front = -1;
        array[5];
    }
    bool isFull()
    {
        if(front == -1 && rear == size-1)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if(front == -1 && rear == -1)
            return true;
        return false;
    }
    // get value from the user
    int Get()
    {
        int n;
        cout<<"Enter the Value_ ";
        cin>>n;
        return n;
    }

    //Push function in rear 
    void simplePushAtRear()
    {
        if(isFull())
            cout<<"Your array is Full Right Now!\n";
        else if(rear != size-1)
        {
            int value = Get();
            rear ++;
            array[rear] = value;
            cout<<value<<" Value is Insert on index "<<rear;
        }
    }
    //Pop function at rear 
    void PopAtRear()
    {
        if(isEmpty() || front == rear)
            cout<<"Your array is Empty Right Now!\n";
        else if(rear != -1)
        {
            int value = array[rear] ;
            rear --;
            cout<<value<<" is pop from the index "<<rear+1;
        }
    }

    //Pop function at Front 
    void simplePopAtFront()
    {
        if(isEmpty() || front == rear)
            cout<<"Your array is Empty Right Now!\n";
        else if(rear != -1 )
        {
            front ++;
            int value = array[front] ;
            cout<<value<<" is pop from the index "<<front;
        }
    }
    //Push function on Front 
    void PushAtFront()
    {
        if(isFull() || front == -1)
            cout<<"Your array is Full for front value Right Now!\n";
        else if(front != -1)
        {
            int value = Get();
            array[front] = value;
            front--;
            cout<<value<<" Value is Insert on index "<<front+1;
        }
    }
    // Check the value of fornt and rear
    void whereIs()
    {
        cout<<"\nFront Index--> "<<front<<"\nRear Index--> "<<rear<<endl;
    }
    void Display(){
        int i;
        if(isEmpty())
            cout<<"The Queue is Empty Right Now\n";
        else if(front == -1){
            cout<<"\nThe OutPut is : \n";
            i = 0;
            for( i; i<= rear; i++)
                cout<<array[i]<<endl;
        }
        else{
            cout<<"\nThe OutPut is : \n";
            i = front+1 ;
            for( i; i<= rear; i++)
                cout<<array[i]<<endl;
        }
    }
};

int main(){
    Queue object;
    int n;
    while(1)
    {
        cout<<"\n\n1: Simple Push\n2: Simple Pop\n3: Push At front\n4: Pop at rear\n5: Display\n6: Where is Front and Rear\n";
        cin>>n;
        if(n == 1)
            object.simplePushAtRear();
        else if(n == 2)
            object.simplePopAtFront();
        else if(n == 3)
            object.PushAtFront();
        else if (n == 4)
            object.PopAtRear();
        else if( n == 5)
            object.Display();
        else if(n == 6);
            object.whereIs();
    }
    return 0;
}