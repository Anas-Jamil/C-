#include "quest1.h"
#include <iostream>
using namespace std;
void conversion(int *sminutes, int *hours, int *minutes);
quest1::quest1()
{
   int sminutes, hours, minutes;

   conversion(&sminutes, &hours, &minutes);

   cout<<"Number of hours: "<<hours<<endl;
   cout<<"Remaining minutes: "<<minutes<<endl;


}
void conversion(int *sminutes, int *hours, int *minutes)
{

    cout<<"Please enter start time: ";
    cin>>*sminutes;

    *hours=*sminutes/60;
    *minutes=*sminutes%60;

    return;

}
