#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long

void right_rotate(vector<int>array, int N){
    int temp=array[N-1];
    for(int i=N-2; i>=0; i--){
        array[i+1]=array[i];
    }

    array[0]=temp;

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

    right_rotate(array,N);
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
