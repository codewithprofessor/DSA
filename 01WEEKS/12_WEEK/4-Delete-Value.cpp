#include<iostream>
using namespace std;

struct node {
    int data;
    node * left, * right;
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

    // Search value for deleting
    node* SearchTree(node * temp, int value)
{   
    if(temp == NULL)
        return NULL;
    else
    {
        if(temp->data == value)
            return temp;
        else if(temp->data < value)
            return SearchTree(temp->right, value);
        else
            return SearchTree(temp->left, value);
    }return temp;
}

    // Delete the value get from user

    void Delete(){
        int value = GetValue();
        node * final = SearchTree(root , value);
        node * temp = NULL;
        if(final != NULL){
            while(final != NULL){
                temp = final->right;
                final->data = temp->data;
                final = final->right;
            }
            Display(root);
        }
        else{
            cout<<"This Value is not exist!\n";
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
    int n;
    while(true)
    {
        cout<<"01 Insertion\n02 Delete\n";
        cin>>n;
        if(n ==1)
            object.insert();
        else if(n ==2)
            object.Delete();
    }
    return 0;
}