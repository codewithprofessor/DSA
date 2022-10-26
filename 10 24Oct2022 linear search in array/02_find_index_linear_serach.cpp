// CODE WITH PROFESSOR
#include<iostream>
using namespace std;
int main()
{
    int array[6] , findValue, count =0;
    // Input from the user
    cout<<"Enter the 6 values in Array\n";
    for(int i =0; i < 6; i++)
    {
        cin>> array[i];
    }

    // get the value which we want to find
    cout<<"Enter the value which you want to find: ";
    cin>> findValue;

    // Searching value 
    for(int i=0; i< 6; i++)
    {
        if( array[i] == findValue)
        {
            if(count == 0)
                cout<<"Value match on following index: \n";
            cout<<"Index: "<<i<<endl;
            count++;
        }
    }

    return 0;
}