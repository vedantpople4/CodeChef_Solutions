#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   
	       string s;
	       int l;
	       bool c;
	    cin>>s;
	   l=s.size();
	   
	    if(l>=3)
	    {
	   for(int i=0;i<l-2;i++){
	    if(((s[i]=='0')&&(s[i+1]=='1')&&(s[i+2]=='0'))){
	    c=true;
	    break;
	    }
	   
	    else if((s[i]=='1')&&(s[i+1]=='0')&&(s[i+2]=='1')){
	        c=true;
	        break;
	    }
	      else 
	    c=false;
	}
	       
	   
	
	if(c==true)
	cout<<"Good"<<endl;
	
	else
	cout<<"Bad"<<endl;
	   }
	   else
	   cout<<"Bad"<<endl;
	}
	
	
	return 0;
}
