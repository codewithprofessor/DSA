/*
Suppose you are given a link-list of any length (i.e. no. of nodes) write a C ++ 
program to check whether link list has a cycle? And find the length of cycle/loop.

Note: A loop does not necessarily connect 
back to head node, but can connected to any other node..
*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node * next;
    node * pre;
};
class linker{
    node * head ;
    int count;
    public :
    linker (){
        count = 0;
    }
    // MAKE THE CIRCULAR LINK LIST FUNCTION 
    void makeItCircular()
    {
        int n;
        node * temp = head;
        if(head != NULL)
        {
            cout<<"Enter the Startin position of your node cycle: ";
            cin>>n;
            int s = 0;
            node * t = NULL;
            while(temp->next != NULL)
            {
                s++;
                if(s == n){
                    t = temp;
                }
                temp = temp->next;
            }
            if(t != NULL)
                temp->next = t;
            else 
            {
                cout<<"This node does not Exist!\n";
            }
        }
    }
// run function for checking the circular
    bool isCircular()
    {
        count= 0;
        node * temp = head;
        node * start = temp;
        node * end = temp->next;
        node * ending_value ;
        bool flag = false;
        while(end->next != NULL)
        {
            while(start != end){
                if(end->next == start)
                {
                    flag = true;
                    ending_value = end;
                    break;
                }
                else
                    start = start->next;
            }
            temp = temp->next;
            end = temp->next;
            start = head;
            if(flag == true)
            {
                break;
            }
        }
        while(start != ending_value)
        {
            count++;
            start = start->next;
        }
        if(flag == false)
            return false;
        return true;
    }
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
                head = news;cout<<head;
            }
            else {
                if(isCircular() == false){
                    node * temp = head;
                    while(temp->next != NULL){
                        temp = temp->next;
                    }
                    news->data = value;
                    news->pre = temp;
                    news->next = NULL;
                    temp->next = news;
                }
            }
        }
    }
    void Display(){
        // if(head != NULL)
        // {
        // //     if(true){
        //         node * temp = head;
        //         cout<<"OUTPUT:\n";
        //         while(temp->next != NULL){
        //             cout<<temp->data<<endl;
        //             temp = temp->next;
        //         }
        //         cout<<temp->data;
        //     }
        //     else{
        //         cout<<"FREE DATA : \n";
        //         cout<<"Data in Circular: \n";
        //         cout<<"Counter: \n";
        //     }
        // }
    }
};
int main(){
    linker object;
    int n;

    while(1)
    {
        cout<<"\n1: INPUT\n2: MAKE IT CIRCULAR USER DEFINE\n3: DISPLAY \n";
        cin>>n;
        if(n == 1){
            object.input();
        }
        else if(n ==2)
            object.makeItCircular();
        else if(n ==3 ){
            object.Display();
        }
    }
    return 0;
}