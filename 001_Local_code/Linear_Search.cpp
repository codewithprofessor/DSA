#include<iostream>
using namespace std;

void LinearSearch()
{
    int arr[10];
    cout<<"Enter the 10 values in array: \n";
    for(int i =0; i<10; i++)
        cin>>arr[i];
    
    cout<<"What find? ";
    int find;
    cin>>find;

    for(int i =0; i< 10; i++)
    {
        if(find == arr[i])
        {
            cout<<"value is find on index "<<i;
            break;
        }
    }
}

int main()
{
    LinearSearch();
    return 0;
}