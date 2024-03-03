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

        int positive=0;
        int negative=0;
        int sum=0;
        int operation=0;
        for(int i=0; i<N; i++){
            sum=sum+array[i];
            if(array[i]==1){
                positive++;
            }
            else{
                negative++;
            }
        }

        if(negative%2==0){
            negative=negative;
        }
        else{
            negative--;
            positive++;
            sum=sum+2;
            operation++;
        }

        while(sum<0){
            sum=sum+4;
            operation=operation+2;
        }

        cout<<operation<<endl;
    }
    return 0;
}
