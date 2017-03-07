#include<iostream>
#include<string.h>
using namespace std;

struct player
{
 int goals;
 int age;
 char name[20];
 char club[20];
 char country[20];
};

int main()
{
 int n,k,i,j,m=1;
 cout<<"enter the number of records"<<endl;
 cin>>n;
 struct player a[n],temp;
 while(m!=0)
{

 cout<<"press 1 to enter data in the list, 2 to sort the list according to goals scored, 3 to delete a record, and 4 to display the list"<<endl;
 cin>>k;
 if(k==1)
 {
     for(i=0;i<n;i++)
     {
      cout<<"enter the name of player\n";
      cin>>a[i].name;
      cout<<"enter the age of player\n";
      cin>>a[i].age;
       cout<<"enter the club of player\n";
      cin>>a[i].club;
       cout<<"enter the country of player\n";
      cin>>a[i].country;
       cout<<"enter the goals scored of player\n";
      cin>>a[i].goals;
     }
 }
if(k==2)
{    ch:
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if(a[j].goals>a[j+1].goals)
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         }
     }
    /* for(i=0;i<n;i++)
     {
         cout<<a[i].name<<" "<<a[i].goals<<endl;
     }
     */
}
if(k==3)
{   char temp1[20];
    cout<<"enter the name of player whose record is to be deleted\n";
    cin>>temp1;
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i].name,temp1)==0)
        {
            temp=a[i];
            a[i]=a[n-1];
            a[n-1]=temp;
            n=n-1;
        }

    }
    goto ch;

}
if(k==4)
{
   for(i=0;i<n;i++)
   {
    cout<<"name         : "<<a[i].name<<endl;
    cout<<"age          : "<<a[i].age<<endl;
    cout<<"club         : "<<a[i].club<<endl;
    cout<<"country      : "<<a[i].country<<endl;
    cout<<"goals scored : "<<a[i].goals<<endl;
   }
}
 cout<<"enter 1 to continue, 0 to exit";
 cin>>m;

}

return 0;
}
