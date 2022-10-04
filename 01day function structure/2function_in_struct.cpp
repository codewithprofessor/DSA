#include<iostream>
using namespace std;

//define structure
struct student
{
    int rollNo;
    char name[20];
    //Its react as simple function which is call from main function
    void input()
    {
        //GET INPUT
        cout<<"Enter the Roll NO of Student: ";
        cin>>rollNo;  
        cout<<"Enter the Name of Student: ";
        cin>>name;    
    }
    //Its react as simple function which is call from main function
    void display()
    {
        //DISPLAY DATA
        cout<<endl<<"Roll NO."<<rollNo<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
int main()
{
    //Define veriable which have "student" data type
    student stu[2];     //stu is an array have a student datatype
    
    //call the input function
    for (int i = 0; i < 2; i++)
    {
        stu[i].input();
    }
 
    //call the display function 
    for (int i = 0; i < 2; i++)
    {
        stu[i].display();
    }
    return 0;
}
