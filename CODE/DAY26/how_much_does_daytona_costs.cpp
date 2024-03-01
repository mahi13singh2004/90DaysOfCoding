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
        int n,k;
        cin>>n>>k;

        vector<int>array(n);
        for(int i=0; i<n; i++){
            cin>>array[i];
        }

        bool flag=false;
        for(int i=0; i<n; i++){
            if(array[i]==k){
                flag=true;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
