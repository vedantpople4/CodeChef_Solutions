#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n; 
	    cin>>n;
	    int arr[n];
	    int res=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        res+=arr[i];
	    }
	    if(res>=0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	}
	return 0;
}
