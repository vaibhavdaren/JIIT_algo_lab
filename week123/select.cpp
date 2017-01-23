#include<iostream>
using namespace std;
int s=0;
int c=0;

void sort(int a[], int n)
{
 int pos,i,j;
 int swap;
  for(i=0;i<n-1;i++)
  {
     pos=i;
     for(j=i+1;j<n;j++)
     {
       c++;
        if(a[pos]>a[j])
        {
        pos=j;
        }
    if(pos!=i)
    {
               swap=a[pos];
           a[pos]=a[j];
           a[j]=swap;
             s++;
    }
}
  }
}
int  main()
{
  int i,j,k,n;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  cin>>a[i];

   sort(a,n);
   cout<<c<<"\n"<<s;
   }
