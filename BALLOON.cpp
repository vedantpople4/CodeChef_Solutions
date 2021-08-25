#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ 
	    int n,count=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=1 && a[i]<=7)
	            count++;
	        if(count==7){
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
