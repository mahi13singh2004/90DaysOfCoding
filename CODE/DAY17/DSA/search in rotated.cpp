
#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
    
int search_in_rotated(vector<int>array, int key){
    int start=0;
    int end=array.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>=array[0]){
            if(key>=array[0] && key<array[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(key>array[mid] && key<=array[0]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}

void solve(){
        int N;
        cin>>N;

        vector<int>array(N);
        for(int i=0; i<N; i++){
            cin>>array[i];
        }

        int key;
        cin>>key;

        int answer=search_in_rotated(array,key);

        cout<<answer<<endl;
}
    
signed main(){
        solve();
return 0;
}
