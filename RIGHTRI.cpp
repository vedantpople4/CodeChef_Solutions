#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int ans=0;
	while(t--)
	{
	    int x1,y1,x2,y2,x3,y3;
	    
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    float a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	    float b=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
	    float c=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
	    if(a+b==c||a+c==b||b+c==a)
	    ans++;
	    
	}
	cout<<ans<<endl;
	return 0;
}
