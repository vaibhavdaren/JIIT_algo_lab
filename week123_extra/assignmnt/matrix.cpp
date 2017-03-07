#include<iostream>
using namespace std;

int main()
{
  int i,j,k,l,n;
  int p=0;
  cout<<"ENTER MATRIX SIZE";
  cin>>n;
  int a[n][n];
  cout<<"PLEASE ENTER ELEMENTS IN SORTED ORDER";
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
      cin>>a[i][j];
  }
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
      cout<<a[i][j]<<"\t";
      cout<<"\n";
  }
  cout<<"enter element to search\n";
  cin>>k;
 i=0;
  j=n-1;
  while(i<n&&j>=0)
  {
    if(a[i][j]==k)
      {
        cout<<"FOUND AT"<<i<<","<<j<<""\n;
         p=1;
        }
        if(a[i][j]>k)
        j--;
        else
        i++;
        }

    if(p==0)
    cout<<"NOT FOUND";
    return 0;
    }
