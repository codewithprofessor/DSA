#include<iostream>
using namespace std;

struct node {
    int data;
    node * next;
    node * pre;
};

class linker{
    node * head;
    public:
        linker()
    {
        head = NULL;
    }
    int getValue()
    {
        cout<<"Enter the value: ";
        int n;
        cin>>n;
        return n;
    }
    
    //Get and set value is start form the user 

    void startInsert()
    {
        node * news = new node();
        int n = getValue();
        if(head == NULL)
        {
            news->data = n;
            news->pre = head;
            head = news;
        }
        else {
            news->data = n;
            news->pre = head;
            news->next = head;
            head = news;
        }
    }

    // void circular()
    // {
    //     node * tem = head;
    // }
      void display()
    {
        cout<<"\n\nDisplay OUTPUT\n";
        node * p =  head;
        while (p->next != NULL)
        {
            /* code */
            cout<<p->data<<endl;
            p = p->next;
        }  
        cout<<p->data<<endl;cout<<"\n\n";
    }

};
int main()
{
    linker object;
    object.startInsert();
    object.startInsert();
    object.startInsert();
    object.display();
    return 0;
}