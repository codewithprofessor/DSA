#include<iostream>
using namespace std;

struct node{
    int data;
    node * left;
    node * right;
};

class tree{
    node * root = NULL;
    public:

// Get value from the user 
    int GetValue(){
        cout<<"\nEnter the Value:  ";
        int n;
        cin>>n;
        return n;
    }

    // Insertion Function (isert at first node)
    bool insert(){
        node * news = new node();
        if(!news){
            cout<<"Memory is overFlow no node is Created!\n";
            return false;
        }
        else{
            int value = GetValue();
            if(root == NULL){
                news->data = value;
                news->left = NULL;
                news->right = NULL;
                root = news;
                return true;
            }
            else{
                node * temp = root;
                node * final ;
                while(temp != NULL){
                    final = temp;
                    if(value == temp->data){
                        cout<<"Value is Repeating!\n";
                        return false;
                    }
                    else if(value < temp->data)
                        temp = temp->left;
                    else
                        temp = temp->right;
                }
                news->data = value;
                if(final->data < value)
                    final->right = news;
                else
                    final->left = news;
                cout<<endl<<endl<<"outPut is \n";
                Display(root);
                return true;
            }
        }
    }

    // Dispaly value using the inorder method

    void Display(node * temp){
        if(temp != NULL){
            Display(temp->left);
            cout<<temp->data<<"    ";
            Display(temp->right);
        }
    }
};


int main(){
    tree object;
    while(true)
    {
        object.insert();
    }
    return 0;
}