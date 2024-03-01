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
        int N,D;
        cin>>N>>D;
        
        vector<int>array(N);
        for(int i=0; i<N; i++){
            cin>>array[i];
        }
        
        long long risk=0;
        
        for(int i=0; i<N; i++){
            if(array[i]>=80 || array[i]<=9){
                risk++;
            }
        }
        
        long long safe=N-risk;
        
        double non_safes=ceil((double)risk/(double)D);
        double safes=ceil((double)safe/(double)D);
        cout<<safes+non_safes<<endl;
    }
    return 0;
}
