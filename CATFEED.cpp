#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,flag=0,inp;
        cin>>n>>m;
        int count[n]={0};
        for(int j=0;j<m;j++){
            cin>>inp;
            count[inp-1]++;
            for(int k=0;k<n;k++){
                if((count[inp-1]-count[k])>1){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    } 
	return 0;
}
