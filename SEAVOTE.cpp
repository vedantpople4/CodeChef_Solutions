#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;

vector<int> v;

void prime()
{
    bool is_prime[N];
    is_prime[0]=false;
    is_prime[1]=false;
    for(long int i=2;i<N;i++)
        is_prime[i]=true;
    for(long int i=0;i<N;i++){
        if(is_prime[i]==true)
        {
            for(long int j=2;j*i<N;j++)
                is_prime[i*j]=false;
        }
    }
    for(long int i=0;i<N;i++){
        if(is_prime[i])
            v.push_back(i);
    }
    

}

void factorize(long int x){
     for(long int i=2;i*i<=x;i++){
        if(x%i==0)
        {
            while(x%i==0)
            {
                x/=i;
                mp[i]++;
            }        
        }
    }
    if(x>1)
        mp[x]++;
}

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    long int sum=0,f=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0)
            f++;
            sum+=x;
    }
    if(sum<100)
        cout<<"NO\n";
    else
        if(sum==100)
            cout<<"YES\n";
    else if(sum-100<f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
   }

}
