#include "q2.h"

#include <iostream>
using namespace std;

struct Student
{
    int studNum, studMarks;
    float studGpa;
};

q2::q2()
{
    //ctor
    Student std1, *ptr;
    ptr=&std1;



    cout<<"Enter student number: ";
    cin>>ptr->studNum;
    cout<<"Enter student marks: ";
    cin>>ptr->studMarks;
    cout<<"Enter student's GPA: ";
    cin>>ptr->studGpa;

    cout<<endl;
    cout<<endl;

    cout<<"Student number: "<<ptr->studNum<<endl;
    cout<<"Student marks: "<<ptr->studMarks<<endl;
    cout<<"Student GPA: "<<ptr->studGpa<<endl;

}
