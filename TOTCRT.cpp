#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string, int> m;
        int r=3;
        while(r--){
            for(int i=0;i<n;i++){
                string s;
                int x;
                cin>>s>>x;
                m[s]+=x;
            }
        }
        vector<int> v;
        for(auto element :m){
            v.push_back(element.second);
        }
        sort(v.begin(),v.end());
        for(auto ele : v){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
return 0;
}
