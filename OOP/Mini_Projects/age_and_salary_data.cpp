#include "quest2.h"
#include <iostream>
using namespace std;

void getdata(int *age, double *salary);
quest2::quest2()
{
    int age;
    double salary;

    getdata(&age,&salary);

    cout<<"Age: "<<age<<endl;
    cout<<"Salary: "<<salary<<endl;

}
void getdata(int *age, double *salary)
{
    cout<<"Please enter your age: ";
    cin>>*age;
    cout<<"Please enter your salary: ";
    cin>>*salary;
}
