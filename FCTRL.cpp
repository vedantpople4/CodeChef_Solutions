#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

 main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         long long int n,i,s,k,c=0;
         cin>>n;
         for(i=1;i<=n;i++)
         {
             s=s*i;
         }
         for (int i = 5; n / i >= 1; i *= 5)
        c += n / i;
 
    cout<<c<<endl;;
     }
 }
