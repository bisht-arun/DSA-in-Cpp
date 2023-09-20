#include<iostream>
using namespace std;

class Student
{
    public: 
    int rollno;
    int age;

    void display()
    {
        cout<<age<<" "<<rollno<<endl;
    }

    Student()//Default Constructor
    {
        cout<<"Default Constructor Called"<<endl;
    }

    Student(int r)//Parametrised Constuctor
    {
        rollno=r;
        cout<<"Parametrised Constructor Called"<<endl;
    }

    Student(int r,int a)//Parametrised Constuctor
    {
        cout<<"This :" << this<<endl;//Holds the address of cuurret object
        rollno=r;
        age=a;
        cout<<"Parametrised Constructor 2 Called"<<endl;
    }
};

int main()
{
    Student S1;
    S1.display();

    Student *S2=new Student;
    (*S2).display(); //or S2 -> display();

    Student S3(10);
    S3.display();

    Student *S4=new Student(20);
    S4 -> display();

    Student S5(30,1);
    S5.display();

    cout<<"Address :"<<&S5;

}