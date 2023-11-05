#include "quest1.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct phone
{
    int code, area, number;
};
struct phone2
{
    int code, area, number;

};
quest1::quest1()
{
    struct phone s;
    struct phone2 b;

    cout<<"Please enter your country code: ";
    cin>>s.code;

    cout<<"Please enter the area code: ";
    cin>>s.area;

    cout<<"Please enter phone number: ";
    cin>>s.number;

    cout<<"Please enter your country code: ";
    cin>>b.code;

    cout<<"Please enter the area code: ";
    cin>>b.area;

    cout<<"Please enter your second phone number: ";
    cin>>b.number;

    cout<<"Your First Phone Numeber: "<<s.code<<" "<<s.area<<" "<<s.number<<endl;
    cout<<"Your Second Phone Numeber: "<<b.code<<" "<<b.area<<" "<<b.number<<endl;
}
