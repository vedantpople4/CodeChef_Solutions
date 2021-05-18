#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll xorans(ll n)
{
    ll a=2;
    ll b=1;
    ll c=n-1;
    while(c>0)
    {
        if(c%2==1)
        {
          b=(b*a)%1000000007;
        }
        a=(a*a)%1000000007;
        c=c/2;
    }
    return b;
}
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    cout<<xorans(n)<<endl;
	}
	return 0;
}
