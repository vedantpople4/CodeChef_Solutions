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
    		string a;
    		cin>>a;
    		ll left[26] = {0};
			ll right[26] = {0};
    		ll n = a.length();
    		ll flag = 0;
    		if(n%2==0)flag = n/2;
    		else flag = n/2 + 1;
    		ll ans = 0;
    		for(ll i=0;i<n/2;i++){
    			ll index = a[i] - 'a';
    			left[index]++;
			}
			fr(i,flag,n){
				ll index = a[i] - 'a';
				right[index]++;
			}
			fr(i,0,26){
				if(left[i] == right[i]) ans++;
			}
			if(ans==26) cout<<"YES"<<endl;
			else cout<<"NO"<<andl;
    	
    	
    	
    	}
    	
    	runtime;
    	
    	
    	
}
