#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int n,i,t;
cin>>n;
int a[n],b[1000];
for(int j=0;j<1000;j++)
b[j]=0;
for(i=0;i<n;i++)
{cin>>a[i];
b[a[i]]++;
}
int max=b[0];
for(i=1;i<1000;i++)
{if(b[i]>max)
{max=b[i];t=i;}
}
if(max>n/2)
cout<<t;
else
cout<<"not found";
return 0;
}

