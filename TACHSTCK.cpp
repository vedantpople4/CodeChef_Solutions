#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n;
  cin>>x;
	int a[n],y=0;
	for(int i=0;i<n;i++)
	     cin>>a[i];
	sort(a,a+n);
	int i=0,j=1;
    while(i<n-1 && j<n){
        if((a[j]-a[i])<=x){ i+=2;j+=2;y++;}
        else{
            i++;j++;
        }
    }
    cout<<y;
	return 0;

}
