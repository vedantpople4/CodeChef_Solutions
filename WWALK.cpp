#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
   ll t,n,i;
   cin>>t;
   while(t--)
   {
       ll sum1=0,sum2=0,sum=0;
       cin>>n;
       ll a[n],b[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       cin>>b[i];
       for(i=0;i<n;i++)
       {
           if(sum1==sum2 && a[i]==b[i])
           sum+=a[i];
           sum1+=a[i];
           sum2+=b[i];
       }
     cout<<sum<<endl;
  }
  return 0;
}
