#include "quest2.h"
#include <iostream>

using namespace std;

class runner
{

    private:
        string name;
        int distance;
        static string largestName;
        static int largestDistance;


    public:

        void get(){

            cout << "Enter Runner Name: ";
            cin >>name;

            cout << "Distance covered: ";
            cin >> distance;

            if(distance > largestDistance){

                largestDistance = distance;
                largestName=name ;

            }


        }

        void show(){

            cout << "Name of Runner: " << largestName<< endl;
            cout << "Runner Distance covered: " << largestDistance << endl;


        }



};
string runner::largestName;
int runner::largestDistance;
quest2::quest2()
{
    runner obj1, obj2, obj3;

    obj1.get();
    obj2.get();
    obj3.get();
    obj3.show();
}
