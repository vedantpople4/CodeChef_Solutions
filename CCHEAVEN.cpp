#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        int n=0, flag = 0;
        for (int i = 0; i < l; i++)
        {
            if(s[i]=='1')
            {
                n++;
            }
            if(i+1-n <= n)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }    
    }
} 
