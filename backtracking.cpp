#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
struct d
{
    int value;
    int stage;
};

typedef map<int key,int value> visited;
int main()
{
int i,n,ctr=0;
/*
cin>>n;
int a[n];
for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
*/
int a[3]={1,2,3};
n=3;
stack <d> s;
int vis[6];
//memset(vis,0,n*4);
for(i=0;i<n;i++)
{
    visted.insert(a[i],0);

}
for(i=0;i<n;i++)
    {
        cout<<vis[i];
    }
int j,k;
for(i=0;i<n;i++)
{
    struct d var;
    var.value=a[i];
    var.stage=-1;
    s.push(var);
}
std::map<int, int>::iterator it;

while(s.empty()!=0)
{
    struct d pvar,var=s.top();
    s.pop();

    int comefrom=var.stage;
    int value=var.value;
    it=visited.find(value);
    if (it != m.end())
        {it->second =1;
        ctr++;
        }
    for( it = visited.begin(); it != visited.end(); ++it )
    {
      int key = it->first;
      int currstatus = it->second;
      if(currstatus==0)
      {
          struct d t;
          t.stage=value;
          t.value=key;
          s.push(t);
      }
      it->second=1;
      ctr++;
    }
if(ctr==n)
{
    pvar=s.top();
    s.pop();
}
}
}
