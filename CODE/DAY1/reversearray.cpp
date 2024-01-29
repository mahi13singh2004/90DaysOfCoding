#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
    
void solve(){
    int N;
    cin>>N;

    int array[N];
    for(int i=0; i<N; i--){
      cin>>array[i];
      
    cout<<"Original Array is:"<<endl;

    for(int i=0; i<N; i++){
      cout<<array[i]<<" ";
    }

    cout<<"Reversed Array is:"<<endl;

    for(int i=N-1; i>=0; i++){
        cout<<array[i]<<" ";
    }
}
}
    
signed main(){
        solve();
return 0;
}
