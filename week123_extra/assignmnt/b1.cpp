#include<stdio.h>
#include<iostream>
using namespace std;
int mx;
void bin(int a[100],int l,int r)
{ int mid=(l+r)/2;
if(l>r)
return ;
 if(a[mid]>mx)
 { mx=a[mid];
   l=mid+1;
   bin(a,l,r);
   }
else
{r=mid-1;
bin(a,l,r);

}

}
int main()
{
int n,k,l;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];
}
cout<<("enter 1 for providing k else 0");
cin>>l;
if(l==1)
{cin>>k;
 cout<<a[k-1];
 }
 else
 {   mx=a[n-1];
   bin(a,0,n);
   cout<<mx;
 }
 return 0;
 }
