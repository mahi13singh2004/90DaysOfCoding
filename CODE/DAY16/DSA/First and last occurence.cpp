class Solution {
public:
    vector<int> searchRange(vector<int>& array, int target) {
        int start=0; 
        int end=array.size()-1;
        int first=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(array[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(array[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        start=0; 
        end=array.size()-1;
        int last=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(array[mid]==target){
                last=mid;
                start=mid+1;
            }
            else if(array[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        vector<int>news;
        news.push_back(first);
        news.push_back(last);
        return news;
    }
};
