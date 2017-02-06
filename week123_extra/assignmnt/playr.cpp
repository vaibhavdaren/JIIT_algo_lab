#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct player
{
 char name[100];
 int goal;
 char country[30];
 char club[20];
 int experience;
 struct player *next;
 }*s=NULL;


struct player* newnode()
{
 struct player *temp=new struct player;
 cout<<"\nenter name";
 cin>>temp->name;
 cout<<"\nenter goals scored";
 cin>>temp->goal;
 cout<<"\nenter exp.";
 cin>>temp->experience;
 cout<<"\nenter club";
 cin>>temp->club;
 cout<<"\nenter country";
 cin>>temp->country;
 temp->next=NULL;
    return temp;
}
 void insert()
 {
 struct player* t;
     if(s==NULL)
        s= newnode();
     else
     {
         t=newnode();
         t->next=s;
         s=t;

     }
 }
void del()
{
    char b[100];
    struct player*t=s;
    cout<<"enter the name of player u wanna delete";
    cin>>b;
    struct player*m=s->next;

 if(strcmp(s->name,b)==0)
    {
        s=s->next;

    }
    else
    {

       while(m!=NULL)
      {

        if(strcmp(m->name,b)==0)
        {

            t->next=m->next;
            m=m->next;
            break;
        }
        t=m;
        m=m->next;
     }
   }
}
 void display()
 {

     struct player*t=s;
     while(t!=NULL)
     {

         cout<<t->name<<"\t";
         cout<<t->goal<<"\t";
         cout<<t->country<<"\t";
         cout<<t->club<<"\t";
         cout<<t->experience<<"\n";
         t=t->next;
     }
 }
 int main()
 {
     int n;

     cout<<"press 1 to insert\n";
     cout<<"press 2 to display\n";
     cout<<"press 3 to delete\n";

     do
     { cin>>n;
     switch(n)
     {

         case 1: insert();
                  break;
         case 2: display();
                 break;
         case 3:del();
         case 0:break;
         default: cout<<"wrong input";
                   break;
     }
    }while(n!=0);

 }
