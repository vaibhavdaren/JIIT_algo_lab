#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
int mx=a[0],mn=a[0];
for(i=1;i<n;i++)
{ if(a[i]>mx)
     mx=a[i];
else if(a[i]<mn)
       mn=a[i];
 }
 cout<<mx<<endl<<mn;
return 0;
}
