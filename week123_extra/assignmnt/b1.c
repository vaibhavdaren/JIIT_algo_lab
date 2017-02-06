#include<stdio.h>
#include<iostream.h>
using namespace std;
int main()
{
int n,a,k,l;
cin>>n;
a=int[n];
cout<<"enter 1 for providing k else 0");
cin>>l;
if(l==1)
{cin>>k;
 int tmp=n-1+k%n;
 cout<<a[tmp];
 }
 else
