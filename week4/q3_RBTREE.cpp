
    //abhishek tiwari //abhishek_08
    #include <iostream>
    #include <vector>
    #include <deque>
    #include <queue>
    #include <set>
    #include <algorithm>
    #include <cstring>
    #include <math.h>

    #define loop(i,n)    for( int i=0; i<n; i++ )
    #define loop1(i,a,n) for( int i=a; i<n; i++ )
    #define vloop(i,a)   for( vector<int>::iterator i=a.begin(); i!=a.end(); i++ )
    #define dloop(i,a)   for( deque<int>::iterator i=a.begin(); i!=a.end(); i++ )
    #define PI 3.14159265
    #define gc getchar_unlocked
    #define pb push_back
    #define pf push_front
    #define rf pop_front
    #define rb pop_back
    #define mp make_pair

    using namespace std;

    typedef long long ll;
    const ll M=1000000007;
    const ll INF=1e9;
    inline ll pwr(ll base,ll n){ll ans=1;while(n>0){ if(n%2==1)ans=ans*base;  base=base*base; n/=2;} return ans;}
    inline ll ncr(ll a,ll p2){ ll ans=1; loop1(i,1,p2+1){ ans=(ans*(a+1-i)/i)%M; } return ans; }

    int root=0;

    inline int find_clr( int a ) {

         int ht=log(a)/log(2);

         if( ht%2==0 )
              return root;
         else
              return !root;

    }

    int main(){
     int q,x,y,clr;
     cin>>q;
     char type[3];
     while( q-- ) {

         scanf("%s",type);

         if( type[1]=='i' )
              root=!root;

         else  {
              clr=0;
              scanf("%d %d",&x,&y);
              if( x>y )
              swap(x,y);

              if( type[1]=='r' && find_clr(y) )
              clr++;
              else if( type[1]=='b' && !find_clr(y) )
              clr++;

              if( type[1]=='r' && find_clr(x) )
              clr++;
              else if( type[1]=='b' && !find_clr(x) )
              clr++;

              while( x!=y ) {
                   while( y>x ) {
                     y/=2;
                     if( type[1]=='r' && find_clr(y) )
                     clr++;
                     else if(type[1]=='b' && !find_clr(y) )
                     clr++;
                   }

                   if(x!=y)
                   while( x>y ) {
                     x/=2;
                     if( type[1]=='r' && find_clr(x) )
                     clr++;
                     else if(type[1]=='b' && !find_clr(x) )
                     clr++;
                   }
              }

              if( type[1]=='r' && find_clr(x) )
              clr--;
              else if( type[1]=='b' && !find_clr(x) )
              clr--;

            printf("%d\n",clr);
         }
    }
    return 0;
    }
