#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int *ptr[5], a, b, c, d, e, max;

    cout << "Enter 5 integers" << endl;
    cin >> a >> b >> c >> d >> e;

    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;
    ptr[3]=&d;
    ptr[4]=&e;

    cout << "Max number in array is" << endl;

    max = *ptr[0];
    for(int i =0; i<5; i++)
    {

        if(max<*ptr[i])
            max=*ptr[i];

    }

    cout << "Max: " << max << endl;


}