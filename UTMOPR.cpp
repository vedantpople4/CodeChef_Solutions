#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>k;
	    int num,sum=0;
	    for(int j=0;j<n;j++){
	        cin>>num;
	        sum+=num;
	    }
	    for(int j=1;j<k;j++){
	        sum+=sum+1;
	    }
	    if((sum+1)%2==0)
	        cout<<"even";
	    else
	        cout<<"odd";
	    cout<<endl;
	}
	return 0;
}
