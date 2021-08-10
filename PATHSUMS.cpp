#include <bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin>>t;
	while(t--){
	    long n,k,i,j,o=0,e=0,x,y;
	    cin>>n;
	    vector<long> v[n+1],vis(n+1,0),a(n+1);
	    for(i=0;i<n-1;i++){
	        cin>>x>>y;
	        v[x].push_back(y);
	        v[y].push_back(x);
	    }
	    queue<pair<long,long>> q; q.push({1,1});
	    vis[1]=1;
	    while(!q.empty()){
	        x=q.front().second;
	        y=q.front().first; q.pop();
	        a[y]=x;
	        if(x==1) x=2; else x=1;
	        for(auto it:v[y]) if(!vis[it]) q.push({it,x}),vis[it]=1;
	    }
	    for(i=1;i<=n;i++) cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
