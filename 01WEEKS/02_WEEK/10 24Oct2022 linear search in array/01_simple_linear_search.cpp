// CODE WITH PROFESSOR
#include<iostream>
using namespace std;
int main()
{
    int array[6] , findValue;
    bool flag = false;
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
            flag = true;
    }
    if(flag == true)
        cout<<"Value Exist\n";
    else    
        cout<<"Value can't Exist\n";
    return 0;
}