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
    	fastio;
    	ll t;
    	cin>>t;
    	while(t--){
    	char c;
    	cin>>c;
    	if(c=='A' || c=='E' || c=='I' || c=='O' ||c=='U')
    	cout<<"Vowel"<<endl;
    	else cout<<"Consonant"<<endl;
    	
    	}
    	
    	runtime;
}
