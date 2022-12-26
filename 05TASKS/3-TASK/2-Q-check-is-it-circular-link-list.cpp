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

struct adress{
    node * ptr;
    adress * next;
};
class linker{
    node * head ;
    adress * ptrHead;
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
        if(head != NULL){
            cout<<"Enter the Startin position of your node cycle: ";
            cin>>n;
            int s = 0;
            node * t = NULL;
            while(temp->next != NULL){
                s++;
                if(s == n){
                    t = temp;
                }
                temp = temp->next;
            }
            if(t != NULL)
                temp->next = t;
            else {
                cout<<"This node does not Exist!\n";
            }
        }
    }

    // Get value from the user 
    int Get(){
        cout<<"Enter the Input: ";
        int n; 
        cin>>n;
        return n;
    }

    void addInput(node * p){
        adress * paknode = new adress();
        adress * tempHead = ptrHead;
        if(ptrHead == NULL){cout<<"it is my first input in the addinput fun of add";
            paknode->ptr = p;
            paknode->next = NULL;
            ptrHead = paknode;
        }
        else {cout<<"it is my second input in the addinput fun of add";
            while(tempHead != NULL){
                tempHead = tempHead->next;
            }
            paknode->ptr = p;
            paknode->next = NULL;
            tempHead->next = paknode;
        }   
    }
    int Counter(node * p){
        int countr = 0;
        node * end = p;
        node * start = p->next;
        while(start != end){
            countr ++;
        }
        return countr;

    }
    bool CheckIt(node * p){
        adress * tempHead = ptrHead;
        while(tempHead->next != NULL){
            if(tempHead->ptr == p->next){
                count = Counter(p);
                return true;
            }
            tempHead = tempHead->next;
        }cout<<"chk it return empty false";
        return false;
    }
    bool IsCircular(){
        node * temp = new node();
        temp = head;
        cout<<" i am in circular start fun";
        while(temp->next != NULL){cout<<"i am in circular while loop";
            if(CheckIt(temp) == false){
                cout<<"i go on addInput fun";
                addInput(temp);}
            else {
                return true;
            }
            temp = temp->next;
        }
        return false;
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
            else {cout<<"i am in elsse conditon";
                if(IsCircular() == false){
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

    // fake
    void dis()
    {
        adress * p = ptrHead;
        while(p->next != NULL){
            cout<<p->ptr;
            p = p->next;
        }
    }

    void Display(){
        if(IsCircular() == true)
            cout<<"yes it is circular";
        else {
            cout<<"it is not circular";
        }
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