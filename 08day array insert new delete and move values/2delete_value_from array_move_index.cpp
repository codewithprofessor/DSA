#include<iostream>
using namespace std;

//Display Array 
void display(int *array,int size)
{
    for(int i =0;i< size ;i++)
    {
        cout<<array[i]<<"   ";      
    }
}
int main()
{
    int array[10], deletePosition;

    //get input from the user
    cout<<"Enter the 10 values in the array: \n";
    for(int i=0; i<10; i++)
    {
        cin>> array[i];
    }
    
    // call display function
    cout<<"Array before deletion:  ";
    display(array,10);

    // Delete a value from userdefine position
    cout<<"\nEnter the Position: ";
    cin>> deletePosition;
    int j = deletePosition;
    for(int i=deletePosition-1; i < 10; i++)
    {
        array[i] = array[j++];
    }

    //Display an array after deleting the value 
    cout<<"Array after deleting value: ";
    display(array, 9); 
    return 0;
}
