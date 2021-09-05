#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    stack<int> st;
	    int n,i,k,x,rounds=0;
	    cin>>n;cin>>k;
	    int arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    int p_sum=0,sum=0;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>k)
	        {
	            rounds=-2;
	            break;
	        }
	        if(sum+arr[i]>k)
	        {
	            sum=arr[i];
	            rounds++;
	            continue;
	        }
	        sum+=arr[i];   
	    }
	    cout<<rounds+1<<endl;
	}
	return 0;
}
