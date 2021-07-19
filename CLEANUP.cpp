#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t ;
    while(t--){
        int n,m ;
        cin>>n>>m ;
        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i] ;
        }
        vector<int> vect;
        for (int i=0;i<n;i++){
            vect.push_back(i+1);
        }
        for(int i=0;i<m;i++){
            vector<int>::iterator position = find(vect.begin(), vect.end(), arr[i]);
            if (position != vect.end()){ 
                vect.erase(position);
            }
        } 
        
       if(vect.size()==1){
           for(auto i=vect.begin(); i != vect.end(); ++i)
             cout<< *i <<"\n"<<"  \n";
       }else{
           for (int i=0; i<vect.size(); i++){
               if(i%2==0){
                   cout<< vect[i] <<" " ;
               }
           }
           cout<<endl;
           for (int i=0; i<vect.size(); i++){
               if( i%2==1){
                   cout<< vect[i] <<" " ;
               }
           }
           cout<<endl;
       }
    }
}
