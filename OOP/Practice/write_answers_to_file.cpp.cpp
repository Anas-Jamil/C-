#include "quest2.h"
#include <fstream>
#include <iostream>
using namespace std;
quest2::quest2()
{
    ofstream obj2("ANSWERSsheet.DAT");
    int a1, a2, a3, a4, a5;

    a1=2;
    a2=4;
    a3=1;
    a4=3;
    a5=2;
    obj2<<a1<<endl;
    obj2<<a2<<endl;
    obj2<<a3<<endl;
    obj2<<a4<<endl;
    obj2<<a5<<endl;

    obj2.close();
}
