#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        
        int inc=w2-w1;
        
        int minn=x1*m;
        int maxx=x2*m;
        
        if(inc >= minn && inc<=maxx)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        
    }
	
	return 0;
}
