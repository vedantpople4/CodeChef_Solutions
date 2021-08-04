#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long k;
	    cin>>k;
	    if(k==0){
	        cout<<"3"<<endl;
	    }else{
	        int x = 103993;
	        int y = 33102;
	        int db= 103993/33102.0;
	        //printf("%.6f", db);
	        for(long i=0; i<k; i++){
	            cout<<db;
	            long n = x%y;
	            x = n*10;
	            db = x/y;
	            if(i==0){
	                cout<<".";
	            }
	        }
	        cout<<db<<endl;
	        
	    }
	}
	return 0;
}
