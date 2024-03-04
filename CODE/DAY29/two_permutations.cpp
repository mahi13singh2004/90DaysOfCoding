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
        int N,A,B;
        cin>>N>>A>>B;

        if(N==A && A==B){
            cout<<"YES"<<endl;
        }
        

        else if(N-(A+B)<=1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
