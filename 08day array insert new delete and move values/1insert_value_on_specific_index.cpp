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
    int array[10], newNumber, newPosition=4;
    // initialize array with 0 
    for(int i=0; i<10 ; i++)
    {
        array[i]= 0;
    }
    //get input from the user
    cout<<"Enter the 9 values in the array: \n";
    for(int i=0; i<9; i++)
    {
        cin>> array[i];
    }
    
    // call display function
    cout<<"Array before inseration of new value: ";
    display(array,9);

    //Get the new position and the number 
    cout<<"\nEnter the position where you want to enter new value: ";
    cin>>newPosition;
    cout<<"\nEnter the new number: ";
    cin>>newNumber;

    //Insert a value
    int j = 8;
    for(int i=9; i> newPosition-1; i--)
    {
        array[i] = array[j];
        j--;
    }
    array[--newPosition] = newNumber;
    //Display Array after inserting a new value
    cout<<"Array after inseration of new value"<<endl;
    display(array, 10);
    return 0;
}