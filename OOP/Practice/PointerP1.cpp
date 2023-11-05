#include "q1.h"

#include <iostream>
using namespace std;
#include <cmath>

struct Book
{
    char author[30];
//string author;
    int pages;
    int price;
};


q1::q1()
{
    //ctor
    Book rec, *ptr;
    ptr=&rec;

    cout<<"Enter author name: ";
    cin.get(ptr->author, 30); // The (->) arrow operator used in pointer
// getline(cin, ptr->author);
    cout<<"Enter pages: ";
    cin>>ptr->pages;
    cout<<"Enter price: ";
    cin>>ptr->price;
    cout<<"Author: "<<ptr->author<<endl;
    cout<<"Pages: "<<ptr->pages<<endl;
    cout<<"Price: "<<ptr->price<<endl;
}
