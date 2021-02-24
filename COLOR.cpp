#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin >> s;
		int r=0,g=0,b=0;
		for(int i=0;i<n;i++){
			if(s[i]=='R') r++;
			else if (s[i]=='G') g++;
			else b++;
		}
		cout<<n-(max(r,max(g,b)))<<endl;
	}
	return 0;
}
