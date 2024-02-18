#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;

int square_root_integer(int N){
        long long start=0;
        long long end=N;
        long long answer=-1;
        while(start<=end){
                long long mid=start+(end-start)/2;
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

        int answer=square_root_integer(N);
        cout<<answer<<endl;
}
        
signed main(){
                solve();
return 0;
}
