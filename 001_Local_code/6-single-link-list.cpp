#include <iostream>
using namespace std;

struct node
{
    /* data */
    int data ;
    node * next ;
};

class linker
{
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
    void insertStart()
    {
        node * t = new node();
        int val = getValue();
        if ( head == NULL)
        {
            t->data = val;
            t->next = NULL;
            head =  t;
        }
        else 
        {
            t->data = val;
            t->next =head;
            head =  t;
        }   
    }
    
    // INSERT VALUE ON GIVEN NODE

    void givenNode()
    {
        cout<<"Enter the Position: ";
        int pos;
        cin>>pos;
        node *p = head;
        node *temp = new node();
        int i = 1;
        while (p->next != NULL)
        {
            /* code */
            i++;
            if(i == pos)
            {
                int n = getValue();
                temp->data = n;
                temp->next = p->next;
                p->next = temp;
                break;
            }
            p = p->next;
        }   
    }

    // INSERT VALUE AT THE ENDING POINT

    void endingNode()
    {
        node *p = head;
        int n = getValue();
        node * temp = new node();

        while(p->next != NULL)
        {
            p = p->next;
        }
        temp->data = n;
        temp->next = NULL;
        p->next = temp;
    }

    //SEARCH VALUE 

    void Search()
    {
        node * p = head;
        int n = getValue();
        bool flag = false;
        while (p->next != NULL)
        {
            /* code */
            if(p->data == n)
            {
                cout<<"Find!!!\n";
                flag = true;
            }
            p = p->next;
        }
        if(flag == false)
        {
            cout<<"NOT FOUND\n";
        }
        
    }
    
    //DELETE GIVEN NODE

    void DelGive()
    {
        int delme;
        cout<<"Which node you want to delete: ";
        cin>>delme;
        node *p = head;
        node *pson = p;
        int i = 1;
        while (p->next != NULL)
        {
            /* code */
            i++;
            if(i == delme)
            {
                pson = p->next;
                p->next = pson->next;
                break;
            }
            p = p->next;
        }   
    }

    //same like starting and ending node deletion
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

    int n;
    while(true)
    {
        cout << "INPUT\nDISPLAY\nSEARCH\nDELETE";
        cin>>n;
        if(n == 1)
        {
            cout<<"INSERT AT: \n    start\n   end\n   node_position\n   ";
            cin>>n;
            if(n==1)
                object.insertStart();
            else if (n ==2)
                object.endingNode();
            else if(n==3)
                object.givenNode();
        }
        else if(n==2)
            object.display();
        else if(n==3)
            object.Search();
        else if(n==4)
            object.DelGive();
    }


    return 0;
}