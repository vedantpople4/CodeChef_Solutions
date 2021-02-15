#include <bits/stdc++.h>
using namespace std;
unsigned long long fak[200][200],brc[200];
int main(){
brc[0]=1;
fak[0][0]=1;
int x,ostatak=0;
for(int i=1;i<=105;i++){
    ostatak=0;
    for(int k=0;k<=brc[i-1];k++){
        x=fak[i-1][k]*i+ostatak;
        fak[i][k]=x%10;
        ostatak=x/10;
    }
    brc[i]=brc[i-1];
    while(ostatak){
        brc[i]++;
        fak[i][brc[i]]=ostatak%10;
        ostatak/=10;
    }
}
int t,a,b;
cin>>t;
while(t--){
    cin>>a;
    if(a==0 or a==1)cout<<1;
    else if(a==2)cout<<2;
    else if(a==3)cout<<6;
    else{
    for(int i=brc[a];i>=0;i--)cout<<fak[a][i];
    }
    cout<<endl;
}
return 0;
}
