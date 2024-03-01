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
        int N;
        cin>>N;
 
        long long sum=0;
 
        vector<int>array(N-1);
        for(int i=0; i<N-1; i++){
            cin>>array[i];
        }
 
        for(int i=0; i<N-1; i++){
                sum=sum+(-1*array[i]);
        }
 
        cout<<sum<<endl;
    }
    return 0;
}
