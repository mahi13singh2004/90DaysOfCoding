#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long
    
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int N,X;
        cin>>N>>X;

        if(N%X!=0){
            cout<<1<<endl;
            cout<<N<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<N-1<<" "<<1<<endl;
        }
    }
    return 0;
}
