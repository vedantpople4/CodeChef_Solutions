#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          int a[n]{};
          cin>>a[0];
          int c_local;
          for(int i=1;i<n;i++)
          {
               cin>>a[i];
               if(a[i]<a[i-1])
               c_local++;
          }
          int c_all;
          for(int i=0;i<n;i++)
          {
               for(int j=i+1;j<n;j++)
               {
                    if(a[i]>a[j])
                    c_all++;
               }
          }
          if(c_all==c_local)
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
     }
	return 0;
}
