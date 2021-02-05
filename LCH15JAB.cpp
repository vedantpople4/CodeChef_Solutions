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
    	cin>>s;
    	ll flag = 0;
    	ll n = s.length();
    	ll a[26]={0};
    	if(n%2==1) cout<<"NO"<<endl;
    	else{
    	for(ll i=0;i<n;i++){
    		a[s[i]-'a']++;
		}
    	for(ll i=0;i<26;i++){
    		if(a[i]==n/2){
    		cout<<"YES"<<endl;
    		flag = 1;
    		break;
			}
		}
		if(!flag) cout<<"NO"<<endl;
    }
    }
    runtime;
    	
    	
    	
}
