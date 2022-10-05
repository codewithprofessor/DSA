#include<iostream>
using namespace std;

class stack
{
    //Define Pointer of type int
    int *array;
    int top;
    int size;
    public:
    stack()
    {
        //Simple Cunstructor
    }
    //Cunstructor Overload
    stack(int s)
    {
        top= -1;
        array = new int[s]; //Define size at run time of array
        size = s;
    }
    void push(int n) //function which push the value in array
    {
        if( top < size)
        {
            array[++top] =n;
            cout<<"\nValue is push in Stack\n";
        }
        else
        {
            cout<<"Stack is Full\n";
        }
    }
    int pop()  //This function return value from array
    {
        if( top > -1)
        {
            return array[top--] ;
        }
        else
        {
            cout<<"Stack is empty ";
            return 0;
        }
    }
};
int main()
{
    //Create object of type stack and pass value 5
    stack object(5);

    //Push these values in array of size 5
    object.push(7);
    object.push(10);
    object.push(5);
    object.push(3);
    object.push(2);

    int s;
    //Pop values from array one by one
    s = object.pop();
    cout<<s<<" is pop\n";
    s = object.pop();
    cout<<s<<" is pop\n";
    s = object.pop();
    cout<<s<<" is pop\n";
    s = object.pop();
    cout<<s<<" is pop\n";

    return 0;
}