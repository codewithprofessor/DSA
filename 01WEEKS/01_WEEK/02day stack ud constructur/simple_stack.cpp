//CODE BY ALI
#include<iostream>
using namespace std;

//Define class Stack
class stack
{
    int array[5];
    int top;
    public:
    stack() //Constructor
    {
        top= -1;
    }
    void push(int n) //function which push the value in array
    {
        if( top < 4)
        {
            array[++top] =n;
            cout<<"\nValue is push in Stack\n";
        }
        else
        {
            cout<<"Stack is Full";
        }
    }
    int pop() //This function return value from array
    {
        if( top > -1)
        { //if the value is greater then -1 then this condition run
            return array[top--] ;
        }
        else
        {
            cout<<"Stack is empty";
            return 0; //use for handling error
        }
    }
};
int main()
{
    //Create object of class Stack
    stack object;

    //Call push function of class stack
    object.push(10);
    object.push(5);
    object.push(3);

    //Pop the values form array of class stack
    int s;
    s = object.pop();
    cout<<endl<<s<<" is pop\n";
    s = object.pop();
    cout<<s<<" is pop\n";

    return 0;
}