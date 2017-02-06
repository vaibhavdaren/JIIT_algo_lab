#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{int n,i;
cin>>n;
int a[n];
int b[3];
for(i=0;i<3;i++)
b[i]=0;
for(i=0;i<n;i++)
{cin>>a[i];
b[a[i]]++;
}
for(i=0;i<3;i++)
cout<<b[i];
int j=0;
for(i=0;i<n;i++)
{ if(b[j]!=0)
    {a[i]=j;
    b[j]--;
    }
  else{a[i]=j+1;
  b[j+1]--;
  j++;}
}
for(i=0;i<n;i++)
cout<<a[i];
return 0;
}
