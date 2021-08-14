#include <bits/stdc++.h>
using namespace std;
#define in long long int
int main() {
	in t; cin>>t;
	while(t--){
	    in n,a,b,c; cin>>n>>a>>b>>c;
	    in ans=100000000000;
	    in f[n];
	    for(in i=0;i<n;i++)
	    cin>>f[i];
	    for(in i=0;i<n;i++){
	        if(f[i]>min(a,b)&&f[i]<max(a,b))
	        ans=min(ans,abs(a-b)+c);
	        else{
	            in x=abs(b-f[i])+abs(a-f[i]);
	            ans=min(ans,x+c);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
