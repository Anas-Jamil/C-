#include "quest5.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;
struct zebra
{
    string name, vetname, zooname;
    int age, height, weight;
};
void getinfo(vector<zebra> &info, int);
void printinfo(vector<zebra> &info, int);

quest5::quest5()
{
    vector <zebra> info(3);

    getinfo(info, 3);

    cout<<endl;

    cout<<"Zebra Information " << endl;
    cout<<endl;
    printinfo(info, 3);
}
void getinfo(vector<zebra> &info, int)
{
    for(int i =0; i<3; i++)
    {
        cout<<"Please enter the Zebra's Name: ";
        getline(cin, info[i].name);
        cout<<"\n";
        cout<<"Please enter the Zebra's Age: ";
        cin>>info[i].age;
        cout<<"\n";
        cout<<"Please enter the Zebra's Height: ";
        cin>>info[i].height;
        cout<<"\n";
        cout<<"Please enter the Zebra's Weight: ";
        cin>>info[i].weight;
        cout<<"\n";
        cout<<"Please enter the Zoo Name: ";
        cin >> info[i].zooname;
        cout<<"\n";
        cout<<"Please enter the Veterinarian's Name: ";
        cin>>info[i].vetname;
        cin.ignore();

        cout << endl;
    }
}
void printinfo(vector<zebra> &info, int)
{
    for(int i =0; i<3; i++)
    {
        cout<<"Zebra " << i+1 << endl;
        cout<<"The Zebra's Name: " << info[i].name << endl;
        cout<<"The Zebra's Age: " << info[i].age << endl;
        cout<<"The Zebra's Height: " << info[i].height << endl;
        cout<<"The Zebra's Weight: " << info[i].weight << endl;
        cout<<"The Zoo Name: " << info[i].zooname << endl;
        cout<<"The Veterinarian's Name: " << info[i].vetname << endl;
        cout<<endl;
    }
    cout << endl;

}
