#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	   vector<int>e;
	   vector<int>o;
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	       if(a[i]%2==0)
	       {
	           e.push_back(a[i]);
	       }
	       else
	       o.push_back(a[i]);
	   }
        int es=e.size();
        for(int i=0;i<es;i++)
        {
            a[i]=e[i];
            cout<<a[i]<<" ";
        }
        for(int i=es;i<n;i++)
        {
            a[i]=o[i-es];
            cout<<a[i]<<" ";
        }
       cout<<"\n";
	}
	return 0;
}
