// CODEBYALI
#include<iostream>
using namespace std;
int main()
{
    int array[7] , Counter;
    // Get input from user
    cout<<"Enter the 10 values for sorting:\n";
    for(int i=0; i<7; i++)
    {
        cout<<"Value"<<i+1<<" : ";
        cin>>array[i];
    }
    // Sorting algo
    while(Counter < 7)
    {
        for(int i=0; i<7; i++)
        {
            if(array[i]< array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        Counter++;
    }
    // Display 
    cout<<"Array after sorting"<<endl;
    for(int i =0 ; i<7; i++)
    {
        cout<<array[i]<<"   ";
    }
}