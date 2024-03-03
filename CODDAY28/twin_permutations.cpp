#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long


int find_max(vector<int>array){
    int maxi=INT_MIN;
    for(int i=0; i<array.size(); i++){
        if(array[i]>maxi){
            maxi=max(maxi,array[i]);
        }
    }
    return maxi;
}

int find_min(vector<int>array){
    int mini=INT_MAX;
    for(int i=0; i<array.size(); i++){
        if(array[i]<mini){
            mini=min(mini,array[i]);
        }
    }
    return mini;
}
    
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

        int maximum=find_max(array);
        int minimum=find_min(array);
        int target=maximum+minimum;
        for(int i=0; i<array.size(); i++){
            cout<<target-array[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
