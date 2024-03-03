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
        int A,B,C,D;
        cin>>A>>B>>C>>D;

        if(B>D || C-A>D-B){
            cout<<-1<<endl;
        } 
        else{
            cout<<(A-C)+2*(D-B)<<endl;
        }
    }
    return 0;
}
