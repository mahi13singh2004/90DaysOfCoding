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

        long long odd=0;
        long long even=0;

        for(int i=0; i<N; i++){
            if(array[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(N==1){
            cout<<"NO"<<endl;
        }
        else if(odd%2==0 || odd==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
