#include "quest3.h"
#include <fstream>
#include <iostream>
using namespace std;
quest3::quest3()
{
    ifstream obj("ANSWER.DAT");
    ifstream obj2("ANSWERSsheet.DAT");
    string name, dummy;
    int answer1, answer2, answer3, answer4, answer5, total;
    int ans1, ans2, ans3, ans4, ans5;

    while(getline(obj,name))
    {
        total=0;
        obj>>answer1;
        obj>>answer2;
        obj>>answer3;
        obj>>answer4;
        obj>>answer5;
        obj2>>ans1;
        obj2>>ans2;
        obj2>>ans3;
        obj2>>ans4;
        obj2>>ans5;

        if(answer1==ans1)
        {
            total++;
        }
        if(answer2==ans2)
        {
            total++;
        }
        if(answer3==ans3)
        {
            total++;
        }
        if(answer4==ans4)
        {
            total++;
        }
        if(answer5==ans5)
        {
            total++;
        }
        cin.ignore();

        cout<<endl;
        getline(obj, dummy);
        cout<<name<<"   SCORE: "<<total<<" out of 5"<<endl;
    }
    obj.close();
    obj2.close();
}
