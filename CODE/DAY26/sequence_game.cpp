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
        
        vector<int>empty;

        empty.push_back(array[0]);

        for(int i=1; i<N; i++){
            if(array[i]>=array[i-1]){
                empty.push_back(array[i]);
            }
            else{
                empty.push_back(array[i]);
                empty.push_back(array[i]);
            }
        }

        cout<<empty.size()<<endl;
        for(int i=0; i<empty.size(); i++){
            cout<<empty[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
