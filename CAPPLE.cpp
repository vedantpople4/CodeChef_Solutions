#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        map<ll,ll> m;
        for(int i=0;i<n;i++){
            cin>>x;
            m[x]++;
        }
        cout<<m.size()<<endl;
    }
	return 0;
}
