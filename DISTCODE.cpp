#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s ; 
	    set<string> st ;
	    cin>>s;
	    for(int i=0;i<s.size()-1;i++)
	    {
	        st.insert(s.substr(i,2));
	    }
	    cout<<st.size()<<"\n";
	    st.clear();
	}
	return 0;
}
