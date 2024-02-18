#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;

int square_root(int N){
        int start=0;
        int end=N;
        int answer=-1;
        while(start<=end){
                int mid=start+(end-start)/2;
                if(mid*mid>N){
                        end=mid-1;
                }
                else if(mid*mid<N){
                        answer=mid;
                        start=mid+1;
                }
                else if(mid*mid==N){
                        answer=mid;
                        break;
                }
        }
        return answer;
}
        
void solve(){
        int N;
        cin>>N;

        int answer=square_root(N);
        cout<<answer<<endl;
}
        
signed main(){
                solve();
return 0;
}
