#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int k, x;
	    cin>>k>>x;
	    int arr[128] = {0};
	    int count = 0;
	    for(int i = 0; i<s.size(); i++) {
	        arr[s[i]]++;
	        if(arr[s[i]] <= x) 
	            count++;
	        else{
	            if(k) 
	                k--;
	            else
	                break;
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
