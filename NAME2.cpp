#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        string M,W;
        cin>>M>>W;
        int l1=M.length();
        int l2=W.length();
        int count=0,k=0;
        if(l1==l2)
        {
            for(int i=0; i<l1 || i<l2 ;i++)
            {
                if(M[i]==W[i])
                {
                    count++;
                }
            }
        }
        else if(l1<l2)
        {
            int j=0;
            for(int i=0;i<l2;i++)
            {
                if(M[j]==W[i])
                {
                    j++;
                    k++;
                }
            }
        }
        else
        {
            int j=0;
            for(int i=0;i<l1;i++)
            {
                if(M[i]==W[j])
                {
                    j++;
                    k++;
                }
            }
        }
        if(count==l1 || count==l2 || k==l1 || k==l2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
