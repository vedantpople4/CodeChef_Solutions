#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n,k ; 
        cin >> n >> k ;
        int a[n] ;
        for(int i = 0 ; i < n ;i++)
        {
            cin >> a[i] ;
        }
        int m = sizeof(a) / sizeof(a[0]);
        sort(a, a + m);
        int sum1 = 0 ;
        int sum2 = 0;
        for(int i = 0 ; i < k ;i++)
        {
            sum1 += a[i] ;
        }
        for(int i = 0 ; i<n-k ; i++)
        {
            sum2 += a[i] ;
        }
        if(sum1>sum2)
        {
            for(int i = n-k;i<n;i++)
            {
                sum2 -= a[i] ;
            }
            cout << abs(sum2) << endl ;
        }
        else
        {
            for(int i = k ; i < n ; i++)
            {
                sum1 -= a[i] ;
            }
            cout << abs(sum1) << endl ;
        }
    }
    return 0;
}
