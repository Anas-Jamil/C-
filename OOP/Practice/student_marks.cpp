#include "quest4.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct marks
{
    int ID, mark1, mark2, mark3, mark4;

};
quest4::quest4()
{
    int tot, average;
    struct marks m;
    cout<<"What is your ID: ";
    cin>>m.ID;
    cout<<"Please enter your first mark: ";
    cin>>m.mark1;
    cout<<"Please enter your second mark: ";
    cin>>m.mark2;
    cout<<"Please enter your third mark: ";
    cin>>m.mark3;
    cout<<"Please enter your fourth mark: ";
    cin>>m.mark4;\
    tot = m.mark1 + m.mark2 + m.mark3 + m.mark4;
    average = tot/4;

    cout<<"ID: "<<m.ID<<endl;
    cout<<"mark 1: "<<m.mark1<<endl;
    cout<<"mark 2: "<<m.mark2<<endl;
    cout<<"mark 3: "<<m.mark3<<endl;
    cout<<"mark 4: "<<m.mark4<<endl;
    cout<<"Average: "<<average<<endl;

}
