#include <bits/stdc++.h>
using namespace std;

#define int long long int
using pii = pair<int, int>;
#define eb emplace_back
#define RALL(x) rbegin(x),rend(x)

bool comparator(pair<int, int>& a,pair<int, int>& b){
return a.second>b.second;
}

const int maxn = 3E5+5;
const int mod = 1E9+7;

vector<int> adj[maxn], subval, val;
vector<pii> ch;

void dfs(int now, int lst = -1){
    for(auto x: adj[now]){
        if(x==lst) continue;
        dfs(x,now);
    }
    ch.clear();
    for(auto x : adj[now]){
        if (x!=lst) ch.eb(subval[x], x);
        
    }
    sort(RALL(ch));
    int tok = 1;
    for(auto [_val, id]: ch) val[id] = tok++;
    for(auto x : adj[now]){
        if(x!=lst) subval[now]+=val[x]*subval[x];
    }
}

void solve()
{
    int n,x;
    cin>>n>>x;
    subval.assign(n,1), val.assign(n,0);
    for(int i=0; i<n;++i) vector<int>().swap(adj[i]);
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v, --u,--v;
        adj[u].eb(v), adj[v].eb(u);
    }
    dfs(0);
    cout<<subval[0]%mod *x%mod<<"\n";
}
int32_t main() {
    int t;
    cin>>t;
    for( int _ = 1; _ <= t; ++_ ) {
        solve();
        
    }
	return 0;
}
