class Solution {
public:
    void sortColors(vector<int>&array) {
        int start=0;
        int end=array.size()-1;
        int mid=0;
        while(mid<=end){
            if(array[mid]==0){
                swap(array[mid],array[start]);
                start++;
                mid++;
            }
            else if(array[mid]==1){
                mid++;
            }
            else{
                swap(array[mid],array[end]);
                end--;
            }
        }
    }
};
