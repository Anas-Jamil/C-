#include "quest3.h"
#include <iostream>
using namespace std;
class node2
{
    public:
        int value;
        node2* next;

};
void AtFront(node2**head, int newvalue)
{
node2* newnode = new node2();
newnode->value = newvalue;
newnode->next = *head;
*head = newnode;
}
void After(node2*previous, int newvalue)
{
    if (previous==NULL)
    {
        cout<<"Previous is NULL, It can not be = to NULL"<<endl;

    }
    node2* newnode = new node2();
    newnode->value = newvalue;
    newnode->next = previous->next;
    previous->next=newnode;
}
void End(node2**head, int newvalue)
{
    node2*newnode = new node2();
    newnode->value = newvalue;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head = newnode;
    }
    node2*last = *head;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next = newnode;

}

void display(node2*n)
{
    int total=0;
    while(n!=NULL)
    {
        total+=n->value;
        n=n->next;
    }
    cout<<"Total money saved in 12 month: "<<total<<endl;
    cout<<"Total average saved: "<<total/12<<endl;
}
quest3::quest3()
{
    int m1, m2, m3, m4, m5;


    cout<<"Enter the savings for January: ";
    cin>>m1;
    cout<<"Enter the savings for February: ";
    cin>>m2;
    cout<<"Enter the savings for March: ";
    cin>>m3;
    cout<<"Enter the savings for April: ";
    cin>>m4;
    cout<<"Enter the savings for May: ";
    cin>>m5;



    node2* head = new node2();
    node2* second = new  node2();
    node2* third = new node2();
    node2* fourth = new node2();
    node2* fifth = new node2();

    head->value = m1;
    head->next = second;
    second->value = m2;
    second->next = third;
    third->value = m3;
    third->next = fourth;
    fourth->value = m4;
    fourth->next = fifth;
    fifth->value = m5;
    fifth->next = NULL;


    After(head, 300);

    AtFront(&head, 200);
    AtFront(&head, 300);
    AtFront(&head, 600);

    End(&head, 1000);
    End(&head, 700);
    End(&head, 300);

    display(head);

}

