#include <iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node * next;
};
void input(struct Node* target, Node *next,int d)
{
    target->data = d;
    target->next = next;
}
void display(struct Node* head)
{

    while (head != NULL)
    {
        /* code */
        cout<<"value: "<<head->data<<endl;
        head= head->next;
    }
    
}

int main()
{
    struct Node* *head ;
    struct Node* one = (struct Node * )malloc(sizeof(struct Node));
    struct Node* two = (struct Node * )malloc(sizeof(struct Node));
    struct Node* three = (struct Node * )malloc(sizeof(struct Node));
    int n;
    head = &one;
    cout<<"Enter the data which you want to enter";
    cin>>n;
    input(one, two, n);
    cin>>n;
    input(two, three, n);
    cin>>n;
    input(three, NULL, n);
    display(*head);
    cout<<"again\n";
    display(*head);
    return 0;
}
