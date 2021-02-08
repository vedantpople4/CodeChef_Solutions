#include <bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mpr make_pair
#define andl "\n"
#define f first
#define s second
#define mset(x,y) memset(x,y,sizeof(x))
#define fr(i,h,n) for(long long int i=h;i<n;i++)
#define trace(it,x) for(auto it = (x).begin(); it != (x).end(); it++)
#define mod 1000000007
#define fastio ios::sync_with_stdio (false); cin.tie (0); cout.tie (0);
#define runtime cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
using namespace std;
     
       
int main()
{
    	fastio
    	ll t;
    	cin>>t;
    	while(t--){
    	ll a,b;
		cin>>a>>b;
		ll c1=0,c2=0;
		for(int i=1;i<=a;i+=2)
        {
            if(a>=i)
            {
                c1++;
            }
            a-=i;
           
        }
        for(int i=2;i<=b;i+=2)
        {
            
            if(b>=i)
            {
                c2++;
            }
            b-=i;
           
        }
    	if(c1>c2) cout<<"Limak"<<endl;
    	else cout<<"Bob"<<endl;
    }
    	
    	runtime;
    	
    	
    	
}
