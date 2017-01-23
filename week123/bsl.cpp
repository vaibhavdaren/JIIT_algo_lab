#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int bis(int a[], int k, int l, int h);
int main()
{
 int i,j,l,m,h,p,k,n,x,c=0;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the no u want to search\n");
 scanf("%d",&k);
 cin>>x;
 l=bis(a,k,0,5);
m=l-1;
p=l+1;
while(c<x)
{ if(m>=0&&p<n)
    {
        if(a[l]-a[m]>a[p]-a[l])
        {
         cout<<a[p]<<" ";
         p++;

        }
    else
       {
         cout<<a[m]<<" ";
         m--;
       }
       c++;

    }
    else if(m==0&&p==n)
        break;
    else if(m<0&&p<n)
    {
        cout<<a[p]<<" ";
        p++;
        c++;

    }
    else if(m>=0&&p>=n)
    {
        cout<<a[m]<<" ";
        m--;
        c++;

    }


}

return 0;

 }
int bis(int a[], int k, int l, int h)
 {int m;
 m=(l+h)/2;
 if(l>h)
 printf("not found");
 else if(a[m]>k)
 bis(a,k,l,m-1);
 else if(a[m]<k)
 bis(a,k,m+1,h);
 else
 {
     return m;

 }
 }
