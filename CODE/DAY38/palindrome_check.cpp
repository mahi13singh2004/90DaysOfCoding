#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long
    
void solve(){
    string s;
    cin>>s;

    int start=0;
    int end=s.size()-1;

    bool flag=true;

    while(start<end){
        if(s[start]!=s[end]){
            flag=false;
            break;
        }
        else{
            start++;
            end--;
        }
    }

    if(flag==false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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
