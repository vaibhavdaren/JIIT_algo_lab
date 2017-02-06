#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void insertionsort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
void bubblesort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
void selectionsort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
 void print(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<endl;
}

int main()
{
int n;
cin>>n;
int i,k,a[n];
for(i=0;i<n;i++)
cin>>a[i];
cout<<("entr 1 for insertion sort    2 for bubble 3 for selection 4 for quick 5 for merge sort");
cin>>k;
if(k==1)
{
    insertionsort(a,n);
    print(a,n);

}
else if(k==2)
{
    bubblesort(a,n);
    print(a,n);
}
else if(k==3)
{
    selectionsort(a,n);
    print(a,n);
}
return 0;
}
