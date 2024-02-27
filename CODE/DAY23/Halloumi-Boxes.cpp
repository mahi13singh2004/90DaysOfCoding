#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int N, K;
        cin >> N >> K;
 
        bool flag = true;
 
        int array[N];
        for (int i = 0; i < N; i++) {
            cin >> array[i];
        }
 
        for(int i=0; i<N-1; i++){
            if(K==1 && array[i]>array[i+1]){
                flag=false;
                break;
            }
        }
 
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}
