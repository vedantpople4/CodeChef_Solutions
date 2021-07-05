#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,k,n,flag=0,page;
	    cin>>x>>y>>k>>n;
	    page=x-y;
	    while(n--){
	        int p,c;
	        cin>>p>>c;
	        if(p>=page){
	            if(c<=k)
	                flag++;
	        }
	    }
	    
	    if(flag !=0)
	    cout<<"LuckyChef"<<endl;
	    else if(flag==0)
	    cout<<"UnluckyChef"<<endl;
	    
	}
	return 0;
}
