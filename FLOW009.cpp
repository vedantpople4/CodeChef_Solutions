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
    		string s;
    		ll right[26];
    		ll left[26];
    		cin>>s;
    		fr(i,0,s.length()/2){
    			ll index = s[i]-'a';
    			left[index]++;
			}
			fr(i,(s.length()/2),s.length()+1){
				ll index = s[i]-'a';
				right[index]++;
			}
			ll a=0;
			fr(i,0,26){
				if(left[i]==right[i]){
					a=1;
				}
			}
			if(a==0) cout<<"YES"<<andl;
			else cout<<"NO"<<andl;
				
    	}
    	
    	runtime;
    	
    	
    	
}
