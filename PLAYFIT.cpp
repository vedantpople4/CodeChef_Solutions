#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],i,minimum=INT_MAX,maximum=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			minimum=min(a[i],minimum);
			maximum=max(maximum,a[i]-minimum);
			}
		if(maximum)
			cout<<maximum<<endl;
		else
			cout<<"UNFIT"<<endl;
	}
}
