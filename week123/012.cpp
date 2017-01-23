#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int *a, int *b)
    {  if(*a!=*b)
        {int temp = *a;
    *a = *b;
    *b = temp;
        }
    }
void sorting(int a[], int n)
{
    int l = 0;
    int h = n - 1;
    int m = 0;

    while (m <= h)
    {

     if(a[m]==0)
            swap(&a[l++], &a[m++]);
    else if(a[m]==1)
            m++;
    else if(a[m]==2)

            swap(&a[m], &a[h--]);

        }
    }








int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    sorting(a,n);

    printf("array after sorting ");
  for(i=0;i<n;i++)
    cout<<a[i]<<"  ";


    return 0;
}
