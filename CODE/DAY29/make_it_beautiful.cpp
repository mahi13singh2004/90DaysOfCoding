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
        for(int i=0; i<N;  i++){
            cin>>array[i];
        }

       

        sort(array.begin(), array.end(), greater<int>());

        if(array[0]==array[N-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<array[N-1]<<" "<<array[0]<<" ";
            for(int i=1; i<N-1; i++){
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }
  
    }
    return 0;
}
