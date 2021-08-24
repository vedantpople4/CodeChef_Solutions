#include<bits/stdc++.h>
using namespace std;

bool compareVector (vector<int> i, vector<int> j) { return (i[1]<j[1]); }

int main() {
	// your code goes here
	int t, n;
	cin >> t; 
	while(t--){
	    cin >> n;
	    int warr[n];
	    int larr[n];
	    int temp;
	    vector<int> frogs[n];
	    for (int i=0; i<n; i++){
	        cin >> temp;
	        frogs[i].push_back(i);
	        frogs[i].push_back(temp);
	    }
	    for (int i=0; i<n; i++){
	        cin >> temp;
	        frogs[i].push_back(temp);
	    }
	    int count = 0;
	    int value = 0;
	    sort(frogs, frogs+n, compareVector);
	    for(int i=0; i<n-1; i++){
	        value = frogs[i][0];
	        for(int j=i+1; j<n; j++){
	            while (frogs[j][0] <= value ){
	                frogs[j][0] += frogs[j][2];
	                count += 1;
	            }
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
