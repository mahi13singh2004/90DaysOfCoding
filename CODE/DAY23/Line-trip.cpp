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
        int N,X;
        cin>>N>>X;
 
        long long answer=0;
        long long point=0;
        long long input;
        for(int i=0; i<N; i++){
            cin>>input;
            answer=max(answer,input-point);
            point=input;
        }
 
        long long answer2=2*(X-point);
        cout<<max(answer,answer2)<<endl;
    }
    return 0;
}
