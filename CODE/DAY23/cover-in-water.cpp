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
 
        string S;
        cin>>S;
 
        long long count=0;
        long long answer=0;
        bool flag=false;
 
        for(int i=0; i<N; i++){
            if(S[i]=='.'){
                count++;
            }
        }
 
        for(int i=1; i<N-1; i++){
            if(S[i]=='.' && S[i-1]=='.'  && S[i+1]=='.'){
                answer=2;
                flag=true;
                break;
            }
            else{
                flag=false;
            }
        }
 
        if(flag==true){
            cout<<answer<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}
