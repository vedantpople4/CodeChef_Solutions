#include <bits/stdc++.h>
using namespace std;

int main() {
	short int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   int arr[n];
	    for(int i = 0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr , arr +n);
	    int diff = INT_MAX;
	    for(int i=1; i<n;i++)
	    {
	       diff = min( diff , arr[i] - arr[i-1]);
	    }
	    cout<<diff<<endl;
	 }
	return 0;
}
