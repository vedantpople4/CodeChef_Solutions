#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
	// your code goes here
	ll a,b,c;
	cin>>a;
	while(a--){
	    cin>>b>>c;
	    ll ans = 0;
	    vector<int> v(b+1,1);
	    for(ll i=2;i<=b;i++){
	        ll p = c%i;
	        ans+=v[p];
	        for(ll j=p;j<=b;j+=i){
	            v[j]++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
