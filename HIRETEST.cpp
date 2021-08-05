#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int x,y;
		cin>>x>>y;
		string res="";
		for(int i=0;i<n;i++)
		{	
			string s;
			cin>>s;
			int f=0,u=0,p=0;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='F')
					f++;
				else if(s[i]=='P')
					p++;
				else
					u++;
			}
			if(f>=x)
				res+=to_string(1);
			else if(f>=(x-1)&&p>=y)
				res+=to_string(1);
			else
				res+=to_string(0);
		}
		cout<<res<<"\n";
	}
	return 0;
}
