#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;

void find_unique(int array[], int N){
    int answer=0;

    for(int i=0; i<N; i++){
      answer=answer^array[i];
    }

    cout<<answer<<endl;
}
  
void solve(){
    int N;
    cin>>N;

    int array[N];
    for(int i=0; i<N; i++){
      cin>>array[i];
    }

    find_unique(array,N);
}
  
signed main(){
    solve();
return 0;
}