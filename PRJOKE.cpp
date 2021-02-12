#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int arr[41];
	arr[0]=0;
	for(int i=1;i<41;i++)
	{
       arr[i]=i^arr[i-1];
	}
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int a,b;
	        cin>>a>>b;
	    }
	    cout<<arr[n]<<endl;
	}
	return 0;
}
