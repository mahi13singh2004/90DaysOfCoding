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
        int a,b,c;
        cin>>a>>b>>c;

        int turn=1;


        if(c%2==0 || c==0){
            turn=1;
        }
        else{
            turn=2;
        }

    if(turn==1 && a>b){
        cout<<"First"<<endl;
    }
    else if(turn==1 && a<=b){
        cout<<"Second"<<endl;
    }
    else if(turn==2 && b>a){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
    }
    return 0;
}
