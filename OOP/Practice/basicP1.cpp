#include "quest1.h"
#include <iostream>
using namespace std;
quest1::quest1()
{
    char n1[50];
    char n2[50];
    cout<<"Enter name 1: ";
    cin.getline(n1, 50);
    cout<<"Enter name 2: ";
    cin.getline(n2, 50);
    strcat(n1,n2);
    cout<<"Name after concatenation: ";
    cout<<n1<<endl;

}
