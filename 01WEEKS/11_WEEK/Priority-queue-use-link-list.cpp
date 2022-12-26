#include<iostream>
using namespace std;
// code by professor
struct node {
    int data;
    int priority;
    node * next;
    node * pre;
};
class Queue
{
    node * front;
    node * rear;
    public:
    Queue(){
        front = NULL;
        rear = NULL;
    }

    // define Priority function which check the priority and after every insertion, sort the array using sortin algo
    void checkPriority()
    {
        int count =0 , i = 0, j = 0;
        node * tempf = front;
        while(tempf->next != NULL){
            count ++;
            tempf = tempf->next;
        }
        count++;
        tempf = front;
        while(count != i){
            node * temp = tempf;
            j = i;
            while(count != j){
                if(tempf->priority < temp->priority){
                    // Swap values of Priority 
                    int value = tempf->priority;
                    tempf->priority = temp->priority;
                    temp->priority = value;

                    // Swap values of data on the basis of Priority
                    value = tempf->data;
                    tempf->data = temp->data;
                    temp->data = value;
                }
                temp = temp->next;
                j++;
            }  //ending of internal while loop
            tempf = tempf->next;  
            i++;
        }  //ending of external while loop
    }
    // define is isEmpty function
    bool isEmpty()
    {
        if(rear == NULL || front == NULL )
            return true;
        return false;
    }

    // define is Enqueue function
    void Enqueue()
    {
        system("clear"); //if you are windown user then replace "clear" with "cls"
        node * news = new node();
        if(!news)
            cout<<"MEMORY IS OVERFLOW!\n";
        else{
            if(rear == NULL){
                news->next = NULL ;
                cout<<"Enter the Data value _ and Priority_ "<<endl;
                cin>>news->data;
                cin>>news->priority;
                news->pre = NULL;
                rear =front = news;
            }
            else{
                node * temp = rear;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                news->next = NULL ;
                cout<<"Enter the Data value _ and Priority_ "<<endl;
                cin>>news->data;
                cin>>news->priority;
                news->pre = temp ;
                temp->next = news;
                if(front == NULL)
                    front = news;
                checkPriority();
            }

        }
    }

    // define is isEmpty Dequeue
    void Dequeue()
    {
        if(isEmpty())
            cout<<"Your link list Queue is Empty!\n";
        else{

            cout<<"Dequeue value is "<<front->data<<"   which have Priority "<<front->priority;
            front = front->next;
        }
    }

    // define is isEmpty Display
    void Display()
    {
        system("clear"); //if you are windown user then replace "clear" with "cls"
        if(isEmpty())
            cout<<"Queue is Empty NOW!\n";
        else{
            node * temp = front;
            while(temp->next != NULL)
            {
                cout<<"Array "<<temp->data<<" Priority "<<temp->priority<<endl;
                temp = temp->next;
            }
            cout<<"Array "<<temp->data<<" Priority "<<temp->priority<<endl;
        }
    }



};


// define the main function
int main(){
    int n;
    Queue object;
    while(true){
        cout<<"\n\n1: Enqueue"<<endl;
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


/*
!! ****IMPORTANT NOTE****
1. AFTER EVERY INSERTION Priority() function will call
2. If you want to call Priority() function before dequeue then just call it form line 102
3. if you call Priority() function from line 102 then remove it from line 90
*/