// code by ali
#include<iostream>
using namespace std;
int main()
{
    int array[7] ;
    // Get input from user
    cout<<"Enter the 10 values for sorting:\n";
    for(int i=0; i<7; i++)
    {
        cout<<"Value"<<i+1<<" : ";
        cin>>array[i];
    }
    // Sorting algo
    for(int i=0; i<7; i++)
    {
        for(int j=i; j<7; j++)
        {
            if(array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;   
            }
        }
    }
    // Display 
    cout<<"Array after sorting"<<endl;
    for(int i =0 ; i<7; i++)
    {
        cout<<array[i]<<"   ";
    }
}