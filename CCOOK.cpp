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
    	int c=0;
		int x;
		for(int i=0;i<5;i++){
			cin>>x;
			if(x==1){
				c+=1;
			}
		}
		if(c==0) cout<<"Beginner\n";
		else if(c==1) cout<<"Junior Developer\n";
		else if(c==2) cout<<"Middle Developer\n";
		else if(c==3) cout<<"Senior Developer\n";
		else if(c==4) cout<<"Hacker\n";
		else if(c==5) cout<<"Jeff Dean\n";
	
    	}
    	
    	runtime;
    	
    	
    	
}
