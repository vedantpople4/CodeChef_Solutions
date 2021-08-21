#include <bits/stdc++.h>
using namespace std;

int countfunc(int num){
	int result=0;
	while(num!=0){
		if(num%2==1){
			result++;
		}
		num=num/2;
	}
	return result;
}

int main(){

   int t;
   cin>>t;
   while(t--){

	 int n,a,b,p,q,sum,answer=0,i;
	 cin>>n>>a>>b;
	 p = countfunc(a);
	 q = countfunc(b);
	 sum=p+q;
	 if(sum>n){
		 sum=n-(sum-n);
	 }
	 for(i=n-1;sum>0;i--){
		 answer+=pow(2,i);
		 sum--;
	 }
	 cout<<answer<<"\n";
   }


   return 0;
}
