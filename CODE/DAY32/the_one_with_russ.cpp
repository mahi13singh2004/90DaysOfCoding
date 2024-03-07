#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
       int N,X,K;
       cin>>N>>X>>K;
       
       int count=0;
       
       vector<int>russ(N);
       for(int i=0; i<N; i++){
           cin>>russ[i];
       }
       
       vector<int>ross(N);
       for(int i=0; i<N; i++){
           cin>>ross[i];
       }
       
       for(int i=0; i<N; i++){
           if(abs(russ[i]-ross[i])<=K){
               count++;
           }
       }
       
       if(count>=X){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    return 0;
}
