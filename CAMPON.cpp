#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int d;
     cin>>d;
     vector<pair<int,int>>v;
     for(int i=0;i<d;i++)
     {
         int start,end;
         cin>>start>>end;
         v.push_back({start,end});
     }
     int q;
     cin>>q;
     while(q--)
     {
         int a,b;
         cin>>a>>b;
         int sum=0;
         for(int i=0;i<d;i++)
         {
             if(v[i].first<=a)
                sum+=v[i].second;
             else
                break;
         }
         if(sum>=b)
            cout<<"Go Camp\n";
         else
            cout<<"Go Sleep\n";
     }
 }
}
