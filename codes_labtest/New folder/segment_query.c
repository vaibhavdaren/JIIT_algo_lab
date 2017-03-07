#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
     return a;
    else
     return b;
}

create(int a[],int t[],int l,int h,int pos)
{
 int mid;
 if(l==h)
 {
  t[pos]=a[l];
  return;
 }
 mid=(l+h)/2;
 create(a,t,l,mid,2*pos+1);
 create(a,t,mid+1,h,2*pos+2);
 t[pos]=max(t[2*pos+1],t[2*pos+2]);
}
int query(int a[],int t[],int qlow,int qhigh,int l,int h,int pos)
{
    if(qlow<=l && qhigh>=h)
    {
        return t[pos];
    }
    if(qhigh<l || qlow>h)
    {
        return 0;
    }
    int mid=(l+h)/2;
    int p1=query(a,t,qlow,qhigh,l,mid,2*pos+1);
    int p2=query(a,t,qlow,qhigh,mid+1,h,2*pos+2);
    return max(p1,p2);
}

void main()
{
 int i,j,n;
 scanf("%d",&n);
 int a[n],t[2*n-1];
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 create(a,t,0,n-1,0);
 /*for(i=0;i<(2*n-1);i++)
 {
   printf("%d\n",t[i]);
 }
 */

 //int m=query(a,t,4,6,0,n-1,0);
 //printf("%d",m);
 printf("enter index to be updated along with value\n");
int c,d;
scanf("%d%d",&c,&d);
a[c]=d;
int p,q,max,smax;

printf("\nenter the interval");
scanf("%d%d",&p,&q);
max=a[p];
for(i=p;i<q+1;i++)
{
    if(a[i]>max)
     max=a[i];

}
printf("%d",max);
smax=a[p];
for(j=p;j<q+1;j++)
{
    if(a[j]>smax && a[j]!=max)
     smax=a[j];
}
printf("\nmaximised sum is \n");
int x=max+smax;
printf("%d",x);

}
