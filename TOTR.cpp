#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,k,l;
    string m,n="",s;
    string ns;
    cin>>t>>m;
    for(i=0;i<26;i++){
        n=n+(char)(m[i]-32);
    }
    for(i=0;i<t;i++){
        cin>>s;
        ns="";
        for(j=0;j<s.length();j++){
        if((s[j]>='A')&&(s[j]<='Z'))
        ns=ns+n[s[j]-65];
        else if((s[j]>='a')&&(s[j]<='z'))
        ns=ns+m[s[j]-97];
        else if(s[j]=='_')
        ns=ns+" ";
        else
        ns=ns+s[j];
    }
    cout<<ns<<endl;
    }
    return 0;
}
