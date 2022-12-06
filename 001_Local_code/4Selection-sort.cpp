#include <iostream>
using namespace std;


int main()
{
    int ar[5];
    int min;
    cout<<"Enter the Array size 5: \n";
    for(int i=0; i < 5; i++)
        cin>>ar[i];
    
    for(int i=0; i<5; i++)
    {
        min = i;
        for(int j=i; j<5; j++)
        {
            if(ar[min] > ar[j])
                min = j;
        }
        int temp = ar[i];
        ar[i] = ar[min];
        ar[min] = temp;
    }
    for(int i=0; i< 5; i++)
        cout<<ar[i]<<"   ";
    return 0;
}