#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
    node * pre;
};

class linker{
    node * front;
    node * rear;
    public:
    linker(){
        front = NULL;
        rear = NULL;
    }

    // Get value from the user 
    int GetValue()
    {
        int n;
        cout<<"Etner the vlaue : ";
        cin>>n;
        return n;
    }
    // Check is empty or not
    bool isEmpty(){
        if(rear == NULL || rear == front)
            return true;
        return false;
    }

    // INPUT VALUE AT THE FRONT
    void pushAtRear()
    {
        node * news = new node();
        node * temp = rear;
        if(!news){
            cout<<"Memory is overflow\n";
        }
        else{
            int value = GetValue();
            if(rear == NULL){
                news->data = value;
                news->next = NULL;
                news->pre = NULL;
                rear = news;
                front = news;
            }
            else {
                news->data = value;
                news->next = NULL;
                news->pre = rear;
                rear->next = news;
                rear = news;
                if(isEmpty())
                    front = news;
            }
        }
    }

    // pop value from the REAR
    void PopAtRear()
    {
        if(isEmpty())
            cout<<"Your link is empty now!\n";
        else{
            rear = rear->pre;
            rear->next = NULL;
        }
    }

    // POP AT FRONT

    void PopAtFront()
    {
        if(isEmpty())
            cout<<"Your link is empty now!\n";
        else{
            front = front->next;
            front->pre = NULL;
    }

    // PUSH AT FRONT
    void PushAtFront()
    {
        node * news = new node();
        if(!news){
            cout<<"Memory is overflow\n";
        }
        else{
            int value = GetValue();
            if(front == NULL){
                cout<<"Please First Enter the Value in Rear\n";
            }
            else {
                news->data = value;
                news->next = front;
                news->pre = NULL;
                front = news;
            }
        }
    }

    // Display Function
    void Display()
    {
        if(isEmpty())
        {
            cout<<"No Value to display because Queue is Empty\n";
        }
        else{
            node * temp = front;
            node * temp1 = rear;
            cout<<"OUTPUT\n";
            while(temp != temp1){
                cout<<temp->data<<endl;
                temp = temp-next;
            }
            cout<<temp->data<<endl;
        }
    }


};

int main()
{

    linker object;

    return 0;
}
