#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
    
int pivot_element(vector<int>array){
    int start=0; int end=array.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(array[mid]>array[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return end;
}

void solve(){
        int N;
        cin>>N;

        vector<int>array(N);
        for(int i=0; i<N; i++){
            cin>>array[i];
        }

        int answer=pivot_element(array);

        cout<<answer<<endl;
}
    
signed main(){
        solve();
return 0;
}
