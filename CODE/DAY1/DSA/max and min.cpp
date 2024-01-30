#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;

void find_maximum(int array[], int N){
        long long maximum=INT_MIN;
        for(int i=0; i<N; i++){
          if(array[i]>maximum){
            maximum=array[i];
          }
        }
        cout<<"Hence Maximum Value Is:"<<maximum<<endl;
}

void find_minimum(int array[], int N){
        long long minimum=INT_MAX;
        for(int i=0; i<N; i++){
          if(array[i]<minimum){
            minimum=array[i];
          }
        }
        cout<<"Hence Minimum Value Is:"<<minimum<<endl;
}
  
void solve(){
    int N;
    cin>>N;

    int array[N];
    for(int i=0; i<N; i++){
      cin>>array[i];
    }

    find_maximum(array,N);
    find_minimum(array,N);
}
  
signed main(){
    solve();
return 0;
}