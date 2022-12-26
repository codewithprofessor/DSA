// Write a c++ Programme to search an element 
// (element defined by user) in circular link list.


#include <iostream>
using namespace std;

struct node {
    int data;
    node * next;
    node * pre;
};

class linker{
    node * head ;
    public :
    linker (){    }
    
    // Get value from the user 
    int Get(){
        cout<<"Enter the Input: ";
        int n; 
        cin>>n;
        return n;
    }


    void input(){
        node * news = new node();
        if(!news)
            cout<<"Memeory Overflow!\n";
        else {
            int value = Get();
            if(head == NULL){
                news->data = value;
                news->next = NULL;
                news->pre = NULL;
                head = news;
            }
            else {
                    node * temp = head;
                    while(temp->next != NULL){
                        temp = temp->next;
                    }
                    news->data = value;
                    news->pre = temp;
                    temp->next = news;
                    news->next = NULL;
            }
        }
    }

    void Display(){
        if(head != NULL)
        {
            if(!IsCircular()){
                node * temp = head;
                cout<<"OUTPUT:\n";
                while(temp->next != NULL){
                    cout<<temp->data<<endl;
                    temp = temp->next;
                }
                cout<<temp->data;
            }
            else{
                cout<<"FREE DATA : \n";
                cout<<"Data in Circular: \n";
                cout<<"Counter: \n";
            }
        }
    }
};
int main(){
    linker object;
    int n;

    while(1)
    {
        cout<<"\n1: INPUT\n2: MAKE IT CIRCULAR USER DEFINE\n3: DISPLAY \n";
        cin>>n;
        if(n == 1)
            object.input();
        else if(n ==2)
            object.makeItCircular();
        else if(n ==3 ){
            object.Display();
        }
    }
    return 0;
}