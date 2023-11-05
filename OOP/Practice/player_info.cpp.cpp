#include "quest1.h"
#include <iostream>
using namespace std;

class player
{
    private:
    string name, team, na, av, te;
    double avg;

    public:

    player()
    {
    name="Jason";
    avg=44;
    team="phoenix";
    }

    void input()
    {
    cout << "Enter player name: ";
    getline(cin, name);
    cout << "Enter average score: ";
    cin >> avg;
    cin.ignore();
    cout << "Enter team name: ";
    getline(cin, team);
    }

    void change()
    {
    na=name;
    av=avg;
    te=team;
    }

    void display()
    {
    cout << "Player name: " << name << endl;
    cout << "Average score: " << avg << endl;
    cout << "Team name: " << team << endl;
    }
};

quest1::quest1()
{
player obj;

obj.input();
obj.change();
obj.display();

}
