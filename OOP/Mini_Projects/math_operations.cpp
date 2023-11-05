#include "quest3.h"
#include <iostream>
using namespace std;

void getdata(int *num1, int *num2, int *num3);
void add (int *num1, int *num2, int *num3, int *ans1);
void multiply (int *num1, int *num2, int *num3, int *ans2);
void display (int *ans1);
void displaymultiply (int *ans2);
quest3::quest3()
{
    int num1, num2, num3, ans1, ans2;

    getdata(&num1, &num2, &num3);
    add(&num1, &num2, &num3, &ans1);
    multiply(&num1, &num2, &num3, &ans2);
    display(&ans1);
    displaymultiply(&ans2);
}
void getdata(int *num1, int *num2, int *num3)
{
    cout<<"Enter your first number: ";
    cin>>*num1;
    cout<<"Enter your second number: ";
    cin>>*num2;
    cout<<"Enter your third number: ";
    cin>>*num3;

}
void add (int *num1, int *num2, int *num3, int *ans1)
{
    *ans1=(*num1)+(*num2)+(*num3);
}
void multiply (int *num1, int *num2, int *num3, int *ans2)
{
    *ans2=(*num1)*(*num2)*(*num3);
}
void display (int *ans1)
{
    cout<<"the sum of your numbers are: "<<*ans1<<endl;

}
void displaymultiply (int *ans2)
{
    cout<<"The product of your numbers are: "<<*ans2<<endl;

}
