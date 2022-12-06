#include<iostream>
using namespace std;

void BinarySearch()
{
    int arr[10];
    int first =0;
    int last = 9;
    int mid;
    bool flag = true;

    cout<<"Enter the 10 values in array: \n";
    for(int i =0; i<10; i++)
        cin>>arr[i];
    
    cout<<"What find? ";
    int find;
    cin>>find;

    while (first <= last)
    {
        /* code */
        mid = (last+first)/2;
        
        if(arr[mid] >find)
            last = mid -1;
        else if(arr[mid] < find)
            first = mid+1;
        else 
            {
                cout<<"value is find \n";
                flag = false;
                break;
            }
    }
    if(flag == true)
        cout<<"Not found\n";
}

int main()
{
    BinarySearch();
    return 0;
}