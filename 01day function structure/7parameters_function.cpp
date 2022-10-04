#include<iostream>
#include<string>

using namespace std;
//Pass simple datatype like int string value and also pass Array
void fun(int size, string name)
{
    cout<<"Name: "<<name<<endl;
    cout<<"Size: "<<size<<endl;
}
void fun2(float *array, int arraySize)
{
    cout<<"\nThe Values of Array"<<endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout<<array[i]<<endl;
    }
    
}
int main()
{
    //call function
    string name = "Ali";
    int size = 10;
    //call the first function and pass name and size
    fun(size, name);
    float array[2] = {2.1, 4.5};
    
    fun2(array,2);
    return 0;
}