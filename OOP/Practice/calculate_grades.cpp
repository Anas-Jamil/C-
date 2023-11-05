#include "quest3.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct marks
{
    int mark1, mark2;
    char grade;
};
quest3::quest3()
{

    struct marks m;

    int temp;

    cout << "Enter Mark: ";
    cin >> m.mark1;

    temp = m.mark1;

    m.mark2 = temp;

    if(m.mark2 >= 80)
        m.grade = 'A';

    else if(m.mark2 >= 70)
    {

        m.grade = 'B';

    }

    else if(m.mark2 >= 60)
    {

        m.grade = 'C';

    }

    else if(m.mark2 >= 50)
    {

        m.grade = 'D';

    }

    else
    {

        m.grade = 'F';

    }

    cout << "Mark: " << m.mark2 << endl;
    cout << "Grade: " << m.grade << endl;



}
