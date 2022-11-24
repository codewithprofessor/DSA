#include <iostream>
using namespace std;
struct node{
    int data; 
    node * next;
};
void input(node * target, node * next)
{
    cout<<"Enter value: ";
    int num;
    cin>>num;
    target->data= num;
    target->next = next;

}

void display(node * head)
{
    node * tem = head;
    while (tem !=NULL)
    {
        /* code */
        cout<<"Value is : "<<tem->data<<endl;
        tem = tem->next;
    }
    
}

int isThere(node * head, int search)
{
    int i =0;
    bool flag = false;
    while (head != NULL && flag == true)
    {
        /* code */
        i++;
        if(head->data == search)
        {
            flag = true;
            break;
        }
        head->next = head;
    }
    return i;
}

void InsertAtEnd(node * head)
{
    cout<<"Curser is here";
    node * temp = head;
    while(temp!=NULL)
    {
        temp->next = temp;
    }
    node *ptr = new node();
    int num;
    cout<<"Enter value which you want to enter ant the end positon : ";
    cin>>num;
    ptr->data= num;
    ptr->next = NULL;
}
int main()
{
    node **head;
    node * one = new node();
    node * two = new node();
    node * three = new node();
    node * four = new node();

    
    head = &one;

    input(one, two);
    input(two, three);
    input(three, four);
    input(four, NULL);

    // display(*head);
    
    cout<<"Enter Value which you want to find: ";
    int s;
    // cin>>s;
    // int ans = isThere(*head, s);
    // cout<<"your ans is on position : "<<ans;
    InsertAtEnd(*head);
    display(*head);

    return 0;
}