#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long

void right_rotate(vector<int>array, int N, int D){
    D=D%N;
    vector<int>empty(D);
    for(int i=N-D; i<N; i++){
        empty[i-(N-D)]=array[i];
    }

    for(int i=D; i>=0; i--){
        array[i+D]=array[i];
    }

    for(int i=0; i<D; i++){
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

    int D;
    cin>>D;

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
