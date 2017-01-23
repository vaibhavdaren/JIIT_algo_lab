include<iostream>
using namespace std;

int c=0;
int s=0;
void sort(int a[], int n)
{
  int i,j,k,swap,flag;
  for(i=0;i<n-1;i++)
  {     flag=0;
    for(j=i+1;j<n;j++)
    {
    c++;
      if(a[i]>a[j])
      {
        s++;
         swap=a[j];
        a[j]=a[i];
        a[i]=swap;
        flag=1;
        }
    }
    if(flag==0)
    break;
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
     for(i=0;i<n;i++)
  cout<<a[i];


   }
