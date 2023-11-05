#include "quest3.h"
#include <iostream>
using namespace std;
void d(int *n1)
{
    *n1*= 2;
}
void display(int *n1)
{
    cout<<"The number doubled is: "<<*n1<<endl;
}

quest3::quest3()
{
    int n1;

    cout<<"Enter an number: "<<endl;
    cin>>n1;

    d(&n1);
    display(&n1);
}
