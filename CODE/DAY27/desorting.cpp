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

        vector<int>array(N);
        for(int i=0; i<N; i++){
            cin>>array[i];
        }

        long long  less=INT_MAX;

        for(int i=1; i<N; i++){
            int answer=array[i]-(array[i-1]);
            less=min(less,answer);
        }


        bool flag=true;
        for(int i=0; i<N-1; i++){
            if(array[i]>array[i+1]){
                flag=false;
                break;
            }
        }

        if(flag==false){
            cout<<0<<endl;
        }
        else{
        cout<<(less/2)+1<<endl;
        }
    }
    return 0;
}
