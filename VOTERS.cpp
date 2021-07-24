#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    long tot=n1+n2+n3;
    unordered_map<ll,ll> map;
    vector<ll> solution;
    set<ll> final;
    while(tot--){
        ll id;
        cin>>id;
        solution.push_back(id);
    }
    sort(solution.begin(),solution.end());
    vector<ll>::iterator it=solution.begin();
    while(it!=solution.end()){
        map[*it]++;
        if(map[*it]>=2){
            final.insert(*it);
        }
        it++;
    }
    set<ll>::iterator i=final.begin();
    cout<<final.size()<<endl;
    while(i!=final.end()){
        cout<<*i<<endl;
        i++;
    }
    // while(t--){
        
    // }
    return 0;
}
