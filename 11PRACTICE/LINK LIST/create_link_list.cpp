#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next_node;
};
void traversal(struct Node* tem)
{
    do
    {
        /* code */
        cout<<tem->data<<endl;
        tem = tem->next_node;
    } while (tem != NULL);
    

}
int main()
{
    struct Node * head;
    struct Node * s;
    head = (struct Node *)malloc(sizeof(struct Node));
    s = (struct Node *)malloc(sizeof(struct Node));

    head->data=11;
    s->data=12;
    head->next_node=s;
    s->next_node=NULL;

    traversal(head);


    return 0;
}


