#include "quest2.h"
#include <iostream>
using namespace std;
void func(int *p, int *a);

quest2::quest2()
{
    int n1, n2;
    cout<<"Enter a number: "<<endl;
    cin>>n1;
    cout<<"Enter another number: "<<endl;
    cin>>n2;

    int *p = &n1;
    int *a = &n2;
    func(p,a);
}
void func(int *p, int *a)
{
    int temp = *p;
    *p = *a;
    *a = temp;

    cout<<"Number 1 flipped: "<<*p<<endl;
    cout<<"Number 2 flipped: "<<*a<<endl;
}
