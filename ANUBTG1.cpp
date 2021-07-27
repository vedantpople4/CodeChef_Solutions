#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void shopping(vector<int> v,int n){
    int i;
    v.push_back(0);
    sort(v.begin(),v.end(),greater <>());
    int spent=0,count=0;
    
    for(i=0;i<n;i+=4){
        spent+=(v[i]+v[i+1]);
    }

    cout<<spent<<"\n";
}




int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int i,n,data;
	    cin>>n;
	    vector<int> v;
	    for(i=0;i<n;i++){
	        cin>>data;
	        v.push_back(data);
	    }
	    
	    shopping(v,n);
	}
	
	return 0;
}
