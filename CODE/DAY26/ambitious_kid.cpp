#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long
    
signed main(){
    
        int N;
        cin>>N;
 
        vector<int>array(N);
        for(int i=0; i<N; i++){
            cin>>array[i];
        }
 
        long long minimum=INT_MAX;
 
        for(int i=0; i<N; i++){
            if(abs(array[i])<minimum){
                minimum=min(minimum,abs(array[i]));
            }
        }
 
        cout<<minimum<<endl;
    return 0;
}
