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
     
       
int main()
{
    	fastio
    	ll t;
    	cin>>t;
    	while(t--){
    		ll n;
    		cin>>n;
    		ll fact = 0;
    		for(ll i=2;i*i<=n;i++){
    			if(n%i==0) fact = 1;
			}
			if(fact==1 || n==1) cout<<"no"<<endl;
			else cout<<"yes"<<endl;
    	
    	}
    	
    	runtime;
    	
    	
    	
}
