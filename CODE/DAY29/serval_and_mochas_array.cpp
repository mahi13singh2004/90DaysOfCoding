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

        bool flag=true;

        for(int i=0; i<N; i++){
            for(int j=1; j<N; j++){
                if(__gcd(array[i],array[j])<=2){
                    flag=false;
                    break;
                }
            }
        }
        if(flag==false){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
