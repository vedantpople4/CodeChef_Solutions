#include<bits/stdc++.h>
#define ll long long int

using namespace std;
void passing_mark();
int main(){
ll t;
cin>>t;
while(t--)passing_mark();    

return 0;
}
void passing_mark(){
	ll a_min,b_min,c_min,T_min,a,b,c;
	cin>>a_min>>b_min>>c_min>>T_min>>a>>b>>c;
	if((a>=a_min&&b>=b_min&&c>=c_min) &&(a+b+c)>=T_min){
         cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}
