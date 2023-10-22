#include <iostream>
// #include "class.cpp"
using namespace std;

class Student
{
public:
    int rollno;
    int age;

    void display()
    {
        cout << age << " " << rollno << endl;
    }
};

int main()
{
    // create objects statically
    Student s1, s2;

    // create objects dynamically
    Student *s3 = new Student;

    // to access value of object
    s1.age = 25;
    s1.rollno = 1;

    (*s3).age = 30;
    (*s3).rollno = 2;
    // OR
    s3->age = 35; // it automatically de-refrence s3

    // to print the value
    cout << s1.age << endl;
    cout << s1.rollno << endl;

    cout << (*s3).age << endl;
    cout << (*s3).rollno << endl;

    // to use function
    s1.display(); // it will call the display func for the s1
    s2.display(); // display garbage value
    (*s3).display();
    s3->display();
}