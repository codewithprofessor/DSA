// this code have a single error, which is due to dynamic array so wait for next commit thanks
#include<iostream>
using namespace std;
// code by professor
class Queue{
    int *array,* priority;
    int front , rear,  size;
    public:
    Queue(){
        front= 0; 
        rear = -1;
    }
    Queue(int s){
        size = s;
    }
    // create dynamic array 
    void create(int s){
        array = new int(s);
        priority = new int(s);
    }

    // define function isEmpty
    bool isEmpty()
    {   
        if(rear == -1)
            return true;
        return false;
    }

    // define function isFull
    bool isFull(){
        if(rear == size -1 )
            return true;
        return false;
    }

    // define function Priority,,, which chk the priority and insert on highest priority
    void Priority()
    {
        for(int i =front; i<= rear; i++){
            for(int j = i; j <= rear; j++){
                if(priority [i] < priority[j]){
                    // set priority in Priority in priority var arrray 
                    int temp = priority[i];
                    priority[i]  = priority[j];
                    priority[j] = temp;
                    // set priority in array 
                    int temp1 = array[i];
                    array[i]  = array[j];
                    array[j] = temp1;
                }
            }
        }
    }
    // define function Enqueue
    void Enqueue()
    {
        if(isFull())
            cout<<"Array is Full Now!\n";
        else{
            rear ++;
            cout<<"Enter the Value and then Priority!\n";
            cin>>array[rear] ; cin>>priority[rear];
            Priority();
        }

    }

    // define function Dequeue
    void Dequeue()
    {
        if(isEmpty() || front > rear) 
            cout<<"Array is Empty now!\n";
        else{
            cout<<"Deque Value is "<<array[front] <<"   Which have Priority "<<priority[front]<<endl;
            front++;
        }
    }

    // define function Display
    void Display()
    {
        system("clear");
        if(isEmpty()|| front > rear)
            cout<<"Your Queue is Empty\n";
        else{
            for(int i =front ; i<= rear; i++){
                cout<<"Array "<<array[i]<<" Priority "<<priority[i]<<endl;
            }
        }
    }

};

// define the main function
int main(){
    int n;
    cout<<"Enter the size of Array_ ";
    cin>>n;
    Queue object(n);
    object.create(n);
    while(true){
        cout<<"1: Enqueue"<<endl;
        cout<<"2: Dequeue"<<endl;
        cout<<"3: Display"<<endl;
        cout<<"4: EXIT"<<endl;
        cin>>n;
        if(n == 1)
            object.Enqueue();
        else if(n ==2)
            object.Dequeue();
        else if(n == 3)
            object.Display();
        else if(n ==4)
            break;
    }
}
