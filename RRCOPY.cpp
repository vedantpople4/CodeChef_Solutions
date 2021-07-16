#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	        cin>>ar[i];
	    set <int> s;
	    for(int i=0;i<n;i++)
	        s.insert(ar[i]);
	    cout<<s.size()<<endl;
	    
	}
	
	return 0;
}
