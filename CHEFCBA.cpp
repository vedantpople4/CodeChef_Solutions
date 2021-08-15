#include<iostream>
using namespace std;
int main(){
    int  a,b,c,d;
    cin>>a>>b>>c>>d;
   int p=a*b;
   int l=c*d;
   int s = a*c;
   int t = b*d;
   int u = a*d;
   int v = b*c;
    if(p==l||s==t||u==v)
    cout<<"Possible"<<endl;
    
    else
    cout<<"Impossible"<<endl;
}
