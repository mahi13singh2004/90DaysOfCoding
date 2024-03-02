class Solution {
public:

    int find_max(vector<int>array){
        int maxi=INT_MIN;
        for(int i=0; i<array.size(); i++){
            if(array[i]>maxi){
                maxi=max(maxi,array[i]);
            }
        }
        return maxi;
    }

    int find_sum(vector<int>array){
        int sum=0;
        for(int i=0; i<array.size(); i++){
            sum=sum+array[i];
        }
        return sum;
    }

    int find(vector<int>array, int mid, int K){
        int split=1;
        int sum=0;
        for(int i=0; i<array.size(); i++){
            if(sum+array[i]<=mid){
                sum+=array[i];
            }
            else{
                split++;
                sum=array[i];
            }
        }
        return  split;
    }


    int splitArray(vector<int>&array, int K) {
        int start=find_max(array);
        int end=find_sum(array);
        int answer=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            int students=find(array,mid,K);
            if(students<=K){
                answer=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return answer;
    }
};
