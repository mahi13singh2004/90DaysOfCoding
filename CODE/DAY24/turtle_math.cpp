#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long
 
int find_solution(vector<int>array, int N){
    int sum=0;
    int answer=0;
    for(int i=0; i<N; i++){
        sum=sum+array[i];
    }
 
    if(sum%3==0){
        answer=0;
    }
    else if(sum%3==2){
        answer=1;
    }
    else{
        for(int i=0; i<N; i++){
            if(array[i]%3==1){
                answer=1;
                break;
            }
            else{
                answer=2;
            }
        }
    }
    return answer;
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
 
        int answer=find_solution(array,N);
 
        cout<<answer<<endl;
    }
    return 0;
}
