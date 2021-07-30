#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0 , valid = 0;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr[i]+k) > (sum - arr[i]))
            {
                valid++;
            }
        }
         cout<<valid<<endl;
    }
    return 0;
}
