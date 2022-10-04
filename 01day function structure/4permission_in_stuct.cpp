#include<iostream>
using namespace std;

//MAIN STRUCTURE
struct student
{
    private: //these veriable are just accessible in this struct
    int rollNo;
    char name[20];

    public:  //Accessible from anywhere
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


//studentProject contain Project no and name also rollNo and name of Student
struct studentProject
{
    private:
    int projectNo;
    char projectName[10];
    student stu;  //stu is variable of type student

    public: 
    //Its react as simple function which is call from main function
    void input()
    {
        //get input of student data
        stu.input();
        //GET INPUT
        cout<<"Enter the NO of Project: ";
        cin>>projectNo;  
        cout<<"Enter the Name of Project: ";
        cin>>projectName;   
        cout<<endl<<endl; 
    }
    //Its react as simple function which is call from main function
    void display()
    {
        //show student data
        stu.display();
        //DISPLAY DATA
        cout<<"Project NO."<<projectNo<<endl;
        cout<<"Project Name : "<<projectName<<endl;
    }
};
int main()
{
    studentProject stuPro[2]; //it is the veriable of datatype studentProject

    // input function
    for (int i = 0; i < 2; i++)
    {
        stuPro[i].input();
    }
    
    //dsiplay function 
    for (int i = 0; i < 2; i++)
    {
        stuPro[i].display();
    }
    
    return 0;
}
