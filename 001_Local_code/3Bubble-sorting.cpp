#include <iostream>
using namespace std;


int main()
{
    int ar[5];
    cout<<"Enter the Array size 5: \n";
    for(int i=0; i < 5; i++)
        cin>>ar[i];
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(ar[j] > ar[j+1])   //just change the sign for decending order
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;  
            } 
        }
    }
    for(int i=0; i< 5; i++)
        cout<<ar[i]<<"   ";
    return 0;
}