#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pll> vll;


double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);

#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TC(t) while(t--)
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define FOR(a,b,c) for(ll(a)=(b);(a)<(c);++(a))
#define FORE(a,b,c) for(ll(a)=(b);(a)<=(c);++(a))
#define FORED(a,b,c) for(ll(a)=(b);(a)>=(c);--(a))
#define FOREACH(a,b) for(auto&(a):(b))

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("G:/Personal/CP/input.txt", "r", stdin);
	freopen("G:/Personal/CP/output.txt", "w", stdout);
	#endif 
}

void buildTree(ll* a,ll* tree,ll s,ll e,ll tn)
{
	if(s==e)
	{
		tree[tn]=a[s];
		return;
	}
	ll m=(s+e)/2;
	buildTree(a,tree,s,m,2*tn);
	buildTree(a,tree,m+1,e,2*tn+1);
	tree[tn]=tree[2*tn]+tree[2*tn+1];
	return;
}

void lazyUpdate(ll* tree,ll* lazy,ll s,ll e,ll tn,ll l,ll r)
{
	if(s>e)
		return;
	if(lazy[tn])
	{
		tree[tn]=e-s+1-tree[tn];
		if(s!=e)
		{
			lazy[2*tn]=1-lazy[2*tn];
			lazy[2*tn+1]=1-lazy[2*tn+1];
		}	
		lazy[tn]=0;
	}

	if(l>e || r<s)
		return;
	if(s>=l && e<=r)
	{
		tree[tn]=e-s+1-tree[tn];
		if(s!=e)
		{
			lazy[2*tn]=1-lazy[2*tn];
			lazy[2*tn+1]=1-lazy[2*tn+1];
		}	
		return;
	}

	ll m=(s+e)/2;
	lazyUpdate(tree,lazy,s,m,2*tn,l,r);
	lazyUpdate(tree,lazy,m+1,e,2*tn+1,l,r);
	tree[tn]=tree[2*tn]+tree[2*tn+1];
	return;
}


ll query(ll* tree,ll* lazy,ll s,ll e,ll tn,ll l,ll r)
{
	if(lazy[tn])
	{	tree[tn]=e-s+1-tree[tn];
		if(s!=e)
		{
			lazy[2*tn]=1-lazy[2*tn];
			lazy[2*tn+1]=1-lazy[2*tn+1];
		}	
		lazy[tn]=0;
	}
	if(l>e || r<s)
		return 0;
	if(s>=l && e<=r)
		return tree[tn];
	ll m = (s+e)/2;
	ll ans1=query(tree,lazy,s,m,2*tn,l,r);
	ll ans2=query(tree,lazy,m+1,e,2*tn+1,l,r);
	return ans1+ans2;
}

int main(){
	time_t start, end;
	time(&start);
	FAST_IO
	init_code();
	
	ll n,q;
	cin>>n>>q;
	ll a[n]={0};
	ll tree[4*n]={0},lazy[4*n]={0};
	buildTree(a,tree,0,n-1,1);
	// FOR(i,0,3*n)
	// 	cout<<tree[i]<<"\n";
	while(q--){
		ll t,l,r;
		cin>>t>>l>>r;
		if(t==0)
			lazyUpdate(tree,lazy,0,n-1,1,l,r);
		else
			cout<<query(tree,lazy,0,n-1,1,l,r)<<"\n";
	
	}

	
	
	time(&end);
    double time_taken = double(end - start);
    #ifndef ONLINE_JUDGE
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
  	#endif
	return 0;
}

