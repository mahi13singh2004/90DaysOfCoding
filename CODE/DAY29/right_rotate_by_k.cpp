#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long

void right_rotate(vector<int>array, int N, int D){
    k=k%N;
    vector<int>empty(k);
    for(int i=N-k; i<N; i++){
        empty[i-(N-k)]=array[i];
    }

    for(int i=k; i>=0; i--){
        array[i+k]=array[i];
    }

    for(int i=0; i<k; i++){
        array[i]=empty[i];
    }

    for(int i=0; i<N; i++){
        cout<<array[i]<<" ";
    }
}


void solve(){
    int N;
    cin>>N;

    vector<int>array(N);
    for(int i=0; i<N; i++){
        cin>>array[i];
    }

    int k;
    cin>>k;

    right_rotate(array,N,D);
}
    
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
