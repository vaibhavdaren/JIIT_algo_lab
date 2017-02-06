#include<iostream>
using namespace std;


void peak(int a[], int n)
{
int i;
int f=0;
i=0;
while(i<n)
{

   if((i!=0&&i!=n-1&&a[i-1]<=a[i]&&a[i+1]<=a[i])||(i==0&&a[i+1]<=a[i])||(i==n-1&&a[i-1]<=a[i]))
       {
         f=1;
          cout<<a[i];
         break;
       }
       i++;
 }
 if(f==0)
 cout<<"peak element not found";
}

int main()
{
int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
        peak(a,n);
}
