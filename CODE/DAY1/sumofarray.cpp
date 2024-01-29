#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;

void find_sum(int array[], int N){
    long long sum=0;
    for(int i=0; i<N; i++){
        sum=sum+array[i];
    }

    cout<<"Hence sum is:"<<sum<<endl;
}
    
void solve(){
    int N;
    cin>>N;

    int array[N];
    for(int i=0; i<N; i++){
      cin>>array[i];
    }

    find_sum(array,N);
}
    
signed main(){
        solve();
return 0;
}