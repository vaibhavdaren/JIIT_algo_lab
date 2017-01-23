#include<iostream>
using namespace std;

int mini,maxi;
void minmax(int a[], int n)
{
int i,j;
   if(n==1)
      {  mini=a[0];
         maxi=a[0];
      }
   else
  {
      if(a[0]>a[1])
     {
        maxi=a[0];
        mini=a[1];
     }
     else
     {
        maxi=a[1];
        mini=a[0];
     }
     for(i=2;i<n;i++)
     {
       if(a[i]>maxi)
       maxi=a[i];
       else if(a[i]<mini)
       mini=a[i];
     }
  }
}
int main()
{
int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
        minmax(a,n);
    cout<<"\nsmallest="<<mini<<"\nlargest="<<maxi;


  }
