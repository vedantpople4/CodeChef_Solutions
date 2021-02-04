#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l, b;
	    cin>>l;
	    cin>>b;
	    int area = l*b;
	    while(b){
	        int temp;
	        temp=l;
	        l = b;
	        b = temp%b;
	    }
	    cout<<(area/(l*l))<<endl;
	}
	return 0;
}
