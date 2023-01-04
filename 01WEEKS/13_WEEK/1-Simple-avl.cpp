#include <iostream>
using namespace std;

struct node{
    int data;
    int height;
    node * left;
    node * right;
};

class tree{
    node * head = NULL;
    public:
    tree(){}

// get the value from the user
    int Get(){
        cout<<"Enter the value in node_ ;";
        int n;
        cin>>n;
        return n;
    }

    // count the height of the tree (distance between root to leave node)
    int CountHeight(){
        
    }

    // insert value in the tree 
    void insert(){
        node * news = new node();
        if(!news)
            cout<<"Memory is over flow\n";
        else{
            int value = Get();
            if(head == NULL){
                news->data = value;
                news->left =  NULL;
                news->right =  NULL;
                news->height = CountHeight();
            }
            else{
                news->data = value ;
                node * temp = head;
                node * final = head;
                while(temp != NULL){
                    final = temp;
                    if(temp->data > value)
                        temp = temp->left;
                    else if(temp->data < value)
                        temp = temp->right;
                    else{
                        cout<<"it is the repeating value\n";
                        break;
                    }
                }
                if(final->data > value)
                    
                    
            }
        }
    }

};

int main(){
    return 0;
}