#include <bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mpr make_pair
#define andl "\n"
#define f first
#define s second
#define mset(x,y) memset(x,y,sizeof(x))
#define fr(i,h,n) for(long long int i=h;i<n;i++)
#define trace(it,x) for(auto it = (x).begin(); it != (x).end(); it++)
#define mod 1000000007
#define fastio ios::sync_with_stdio (false); cin.tie (0); cout.tie (0);
#define runtime cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
using namespace std;
    
ll gcd(ll a, ll b){
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
       
int main()
{
    	fastio
    	ll t;
    	cin>>t;
    	while(t--){
    		ll n;
    		cin>>n;
    		ll a[n],ans;
    		fr(i,0,n){
    		cin>>a[i];
			if(i==0) ans = a[i];
			else ans = gcd(ans,a[i]);		
		}
		fr(i,0,n){
			cout<<a[i]/ans<<" ";
			cout<<andl;
		}
    
    }
    	runtime;
    	
    	
    	
}
