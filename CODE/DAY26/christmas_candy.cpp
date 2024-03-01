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
        int N;
        cin>>N;
        
        vector<int>array(N);
        for(int i=0; i<array.size(); i++){
            cin>>array[i];
        }
        
        int count=0;
        
        int maximum=array[0];
        
        for(int i=1; i<N; i++){
            if(array[i]<maximum){
                count++;
            }
            else{
                maximum=array[i];
            }
        }
        
        cout<<count<<endl;
    }
    return 0;
}
