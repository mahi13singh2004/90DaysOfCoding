#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;


int first_occur(vector<int>array, int N, int key){
        int answer=-1;
        int start=0;
        int end=array.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(array[mid]==key){
                answer=mid;
                end=mid-1;
            }
            else if(array[mid]>key){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return answer;
}

int last_occur(vector<int>array, int N, int key){
        int answer=-1;
        int start=0;
        int end=array.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(array[mid]==key){
                answer=mid;
                start=mid+1;
            }
            else if(array[mid]>key){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return answer;
}

void solve(){
        int N;
        cin>>N;

        vector<int>array(N);
        for(int i=0; i<N; i++){
            cin>>array[i];
        }

        sort(array.begin(),array.end());

        int key;
        cout<<"Enter Your Key:"<<endl;
        cin>>key;

        int first=first_occur(array,N,key);
        int last=last_occur(array,N,key);

        cout<<(last-first)+1;

}
    
signed main(){
        solve();
return 0;
}
