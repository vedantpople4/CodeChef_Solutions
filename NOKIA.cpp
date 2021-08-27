#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll recursion(ll a,ll b)
{
     if(a+1==b)return 0;
     ll mid=(a+b)/2;
     return b-a+recursion(a,mid)+recursion(mid,b);
}
void solve()
{
     ll n,m;
     cin>>n>>m;
     ll max,min;
     max=(n*(n+3))/2;
     min=recursion(0,n+1);
     if(m<min)cout<<"-1"<<endl;
     else if(m>max)cout<<m-max<<endl;
     else cout<<"0"<<endl;
}

int main() {
     ll t=1;
     cin>>t;
     while(t--)
          solve();
     return 0;
}
