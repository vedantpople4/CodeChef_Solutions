#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s; 
        cin>>s;
        int a[26]={0};
        bool temp=true;
        for(int i=0;i<n;i++)
        {
            char b=s[i];
            int c=(int)b;
            int p=c-97;
            a[p]+=1;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]%2!=0)
            {
               temp=false;
               break;
            }
        }
        if(temp==true) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl;  
    }
    return 0;
}
