#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
unordered_map<ll, ll >dp;
ll batl(ll n)
{
    if(n<=11) return n;
    else if(dp.find(n)!=dp.end())return dp[n];
    else {
        return dp[n]=max(n,(batl(n/2)+batl(n/3)+batl(n/4)));
    }
}
int main(){
    ll n;
    while(cin>>n){
        cout<<batl(n)<<"\n";
    }
    return 0;
}
