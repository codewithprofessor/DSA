#include <iostream>
#include <queue>
// code by professor
using namespace std;

int main(){
    queue <int> q; //define a queue which have int data type and have name 'q'

    //Push the data in the queue
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    // find the size of the queue
    cout<<"Size of the queue is "<<q.size()<<endl<<endl;
    // print all the element of the queue which have name 'q'
    while(!q.empty()){
        cout<<q.front()<<",  ";
        q.pop();
    }
       
    return 0;
}

/*
C++ Queue Methods

In C++, the queue class provides various methods to perform different operations on a queue.

Methods         Description
push()          inserts an element at the back of the queue
pop()           removes an element from the front of the queue
front()         returns the first element of the queue
back()          returns the last element of the queue
size()          returns the number of elements in the queue
empty()         returns true if the queue is empty
*/