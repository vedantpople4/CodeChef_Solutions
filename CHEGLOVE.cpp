#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int b[n];
		bool f = true;
		bool r = true;
		int c=n;
		for (int i = 0; i < n; i++)	cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];
		for (int i = 0; i < n; i++)
    {
			if (f)
			{
				if (b[i] < a[i])
				{
					f = false;
				}
			}
			if (r)
			{
				if (b[i] < a[c - 1])
					r = false;
			}

			c--;
  if(!r and !f){
       break;
  	}			
			
		}

		if (f and r)
			cout << "both" << endl;
		else if (f == true and r == false)
			cout << "front" << endl;
		else if (r == true and f == false)
			cout << "back" << endl;
		else
			cout << "none" << endl;
	}
	return 0;
}
