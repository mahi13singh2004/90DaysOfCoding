#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;

void swap_elements(int array[], int N){
    for(int i=0; i<N; i=i+2){
      if(i+1<N){
        swap(array[i],array[i+1]);
      }
    }


    for(int i=0; i<N; i++){
      cout<<array[i];
    }
    
}
  
void solve(){
    int N;
    cin>>N;

    int array[N];
    for(int i=0; i<N; i++){
      cin>>array[i];
    }

    swap_elements(array,N);
}
  
signed main(){
    solve();
return 0;
}