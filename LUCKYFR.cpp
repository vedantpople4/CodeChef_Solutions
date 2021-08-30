#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int b = a;
        int last, digit = 0;
        while (b > 0)
        {
            b = b / 10;
            digit++;
        }
        int sum = 0, store = digit,counter=0;
        while (a > 0)
        {
            last = a % 10;
            if(last==4)
            {
                counter++;
            }
            a = a / 10;
        }

        cout << counter << endl;
    }
    return 0;
}
