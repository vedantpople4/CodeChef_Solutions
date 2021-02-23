#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[10] = {6,2,5,5,4,5,6,3,7,6};
	int sum = 0;
	while(t--){
		int a,b;
		cin>>a>>b;
		int ans = a+b;
		while(ans>0){
			sum += arr[ans%10];
			ans /= 10;	
		}
		cout<<sum<<endl;
		sum = 0;
	}
	
	
	
	return 0;
}
