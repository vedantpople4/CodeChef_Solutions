#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=n-1;
        for(int i=1; i*i<=n;i++)
        {
           if(n%i==0)
           {
               ans=min(ans,abs(i-(n/i)));
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}
