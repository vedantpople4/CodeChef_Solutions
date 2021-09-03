#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll cnt=0;
    while(n--){
        ll arr[k+1];
        for(ll i=0;i<k+1;i++)
        cin>>arr[i];
        ll sum=0;
         for(ll i=0;i<k;i++)
         sum+=arr[i];
         if(sum>=m and arr[k]<=10)
         cnt+=1;
    }
    cout<<cnt<<endl;
    return 0;
}
