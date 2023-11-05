#include "quest1.h"
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct donator
{
    string name, telephone;
    double amount;
};
void fill_array(vector<donator>&r,int);
void sort_array(vector<donator>&r,int);
void print_array(vector<donator>&r,int);
void congrats(vector<donator>&r,int);
void average(vector<donator>&r,int);

quest1::quest1()
{
    int don = 0;
    cout<<"How many donors do you have: ";
    cin>>don;

    vector<donator>r(don);
    fill_array(r,don);
    print_array(r,don);
    congrats(r,don);
    average(r, don);
    cout<<"THANKS FOR THE SUPPORT"<<endl;
}

void fill_array(vector<donator>&r,int don)
{
    for(int i=0;i<don;i++)
    {
        cout<<"\nPlease enter your name: ";
        cin.ignore();
        getline(cin, r[i].name);
        cout<<"Please enter your phone number: ";
        cin>>r[i].telephone;
        cout<<"Please enter your donation amount: ";
        cin>>r[i].amount;
        cin.ignore();
        cout<<endl;
    }
}
void sort_array(vector<donator>&r,int don)
{
    int i=0;
    double t1;
    string t3, t2;
    for(int k=i+1;k<don;k++)
    {
        if(r[k].amount>r[i].amount)
        {
            t1 = r[k].amount;
            r[k].amount = r[i].amount;
            r[i].amount = t1;

            t2 = r[k].telephone;
            r[k].telephone = r[i].telephone;
            r[i].telephone = t2;

            t3 = r[k].name;
            r[k].name = r[i].name;
            r[i].name = t1;
        }
    }
}
void print_array(vector<donator>&r,int don)
{
    for(int i=0;i<don;i++)
    {
        cout<<"Name: "<<r[i].name<<endl;
        cout<<"Telephone: "<<r[i].telephone<<endl;
        cout<<fixed<<setprecision(2)<<"Donation: "<<"$"<<r[i].amount<<endl;
        cout<<endl;


    }

}
void congrats(vector<donator>&r,int don)
{
    cout<<"Thank you so much for your donation! "<<endl;

}
void average(vector<donator>&r,int don)
{
    int total;
    for(int i=0;i<don;i++)
    {
        total = total + r[i].amount;
    }
    cout<<fixed<<setprecision(2)<<"The average donation amount was: "<<total/don<<endl;
}
