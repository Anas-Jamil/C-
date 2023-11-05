#include "quest2.h"
#include <iostream>

using namespace std;
quest2::quest2()
{
    char str1[40];
    cout<<"enter a string: ";
    cin.getline(str1, 40);
    for(int i=0;i<40;i++)
    {
        cout<<str1[i]<<endl;
        if(str1[i]=='/0')
            break;
    }
}
