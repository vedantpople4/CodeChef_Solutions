#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans=0;
        for(int i=0; i<n; i++){
            if(i==0){
                ans=(m-1);
                continue;
            }
            ans=ans+1+(m-1)*2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
