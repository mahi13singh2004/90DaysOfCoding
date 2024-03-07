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
        int X,Y;
        cin>>X>>Y;
        
        int total_coins=X+Y;
        int total_sum=X*1+Y*2;
        
        if(Y%2==0 && X%2==0){
            cout<<"YES"<<endl;
        }
        else if(X%2!=0){
            cout<<"NO"<<endl;
        }
        else if(Y%2!=0){
            if(X==0||X==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
