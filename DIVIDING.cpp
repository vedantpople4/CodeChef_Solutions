#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cin>>n;
    int a[n];
    for( int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==n*(n+1)/2)
    cout<<"YES";
    else cout<<"NO";
    return 0;
}
