#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

string solve(){
    int N;
    cin>>N;
    
    string S;
    cin>>S;
    
    string duplicate;
    duplicate=S;
    
    sort(duplicate.begin(),duplicate.end());
    
    if(duplicate==S){
        return "YES";
    }
    else{
        int i=0;
        int j=N-1;
        while(i<j){
            if(S[i]>S[j]){
                swap(S[i],S[j]);
            }
            i++;
            j--;
        }
        if(S==duplicate){
            return "YES";
        }
        else{
            return "NO";
        }
    }
}



signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        string answer=solve();
        cout<<answer<<endl;
    }
    return 0;
}
