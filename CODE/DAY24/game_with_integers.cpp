
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
 
        if(N==1){
            cout<<"First"<<endl;
        }
        else if(N%3==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    return 0;
}
