#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin  >> t;
	while(t--)
	{
	    int n,head = 0,tail = 0,i = 0;
	    cin >> n;
	    string s;
	    cin >> s;
	    for(i = 0;i < n;i++)
	    {
	        if(s[i] == 'H')
	        {
	        head++;
	        if(head - tail != 1)
	        break;
	        }
	        else if(s[i] == 'T')
	        {
	            tail++;
	            if(head - tail != 0)
	            break;
	        }
	    }
	    if((i != n) || (head - tail != 0))
	    cout << "Invalid" << endl;
	    
	    else
	    cout << "Valid" << endl;
	}
	return 0;
}
