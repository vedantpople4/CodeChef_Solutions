#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  A;
  int N,K;
  cin >> A >> N >> K ;
  int temp = N+1;
 while(K--){
   cout << A%temp <<" ";
   A/=temp;
 }
  return 0 ;
}
