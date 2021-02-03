#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    int count = 0;
	    for(int i=0; i<n; i++){
	        if(s[i]=='0'){
	            count++;
	        }
	    }
	    if(count==1 || (n-count)==1){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
