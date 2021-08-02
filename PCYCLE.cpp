#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
	
    int n;
    cin>>n;
    
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    vector<vector<int>>v;
    
    bool visited[n+1];
    memset(visited,false,sizeof(visited));
    
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            vector<int>temp;
            visited[i]=true;
            temp.push_back(i);
            
            int x=a[i];
            visited[x]=true;
            
            while(x!=i){
                temp.push_back(x);
                x=a[x];
                visited[x]=true;
            }
            temp.push_back(i);
            v.push_back(temp);
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
return 0;
}
