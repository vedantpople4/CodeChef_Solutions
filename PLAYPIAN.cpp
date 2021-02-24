#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i, flag = 0;
		for(int i=0;i<s.size();i++){
			if(s[i]==s[i+1]){
				flag = 1;
				cout<<"no"<<endl;
				break;
			}
		}
		if(flag==0) cout<<"yes"<<endl;
	}
	return 0;
}
