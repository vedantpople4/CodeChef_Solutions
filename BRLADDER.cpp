#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(q--){
	    int a,b;
	    cin>>a>>b;
	    if(a==b+1){
	        int i=b/2;
	        if(a==2*i+2) cout<<"YES"<<"\n";
	        else cout<<"NO"<<"\n";
      }
      else	if(b==a+1){
	    int i=a/2;
	        if(b==2*i+2) cout<<"YES"<<"\n";
	        else cout<<"NO"<<"\n";
	    }
      else if(a==b+2||b==a+2) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";}
	return 0;
}
