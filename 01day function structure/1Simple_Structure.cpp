#include<iostream>
using namespace std;

struct student
{
    int rollNo;
    char name[20];
};
//Define input function which get data from user 
void input(student *stu, int size)
{
    for(int i=0 ;i<size; i++ )
    {
        cout<<"Enter the Roll NO of Student: ";
        cin>>stu[i].rollNo;  //stu[index].rollNo
        cout<<"Enter the Name of Student: ";
        cin>>stu[i].name;    //stu[index].name
        cout<<endl;
    }
}
//Define display function which shows data to user
void display(student *stu, int size)
{
    for(int i=0 ;i<size; i++ )
    {
        cout<<endl<<"Roll NO."<<stu[i].rollNo<<endl;
        cout<<"Name : "<<stu[i].name<<endl;
    }
}
//MAIN FUNCTION
int main()
{
    //Define veriable which have "student" data type
    student stu[2];     //stu is an array have a student datatype
    //pass the array and it's size to input function
    input(stu, 2);
    //pass the array and it's size to display function
    display(stu ,2);
    return 0;
}

