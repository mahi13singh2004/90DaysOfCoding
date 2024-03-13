#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long
    
void solve(){
    string s;
    cin>>s;

    for(int i=s.size()-1; i>=0; i--){
        cout<<s[i];
    }
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
