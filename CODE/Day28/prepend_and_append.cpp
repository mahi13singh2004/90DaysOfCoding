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

        string S;
        cin>>S;

        int count=0;
        bool flag=true;

        for(int i=0; i<N; i++){
            if((S[i]=='0' && S[N-1-i]=='1') || (S[i]=='1' && S[N-1-i]=='0')){
                count++;
            }
            else{
                flag=false;
                break;
            }
        }

        if(flag==true){
            cout<<0<<endl;
        }
        else{
        cout<<N-(2*count)<<endl;
        }
    }
    return 0;
}
