#include<stdio.h>
#include<iostream>
using namespace std;
struct stu
{
int e;
char name[100];
char branch[100];
float cgpa;
};
int main()
{
int i,n;
struct stu s[n];
cin>>n;
for(i=0;i<n;i++)
{cin>>s[i].e;
cin>>s[i].name;
cout<<s[i].name;
cin>>s[i].branch;
cin>>s[i].cgpa;
}
//int k=binary(s,0,n);
//cout<<k;
return 0;
}
