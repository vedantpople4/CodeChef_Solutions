#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,uj; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k; cin>>k;
        uj=a[k-1];
        sort(a,a+n);
        auto itr=find(a,a+n,uj);
        cout<<distance(a,itr)+1<<"\n";
    }
}
