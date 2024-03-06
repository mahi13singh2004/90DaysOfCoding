class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>&array) {
        int counter=0;
        int maximum=0;
        for(int i=0; i<array.size(); i++){
            if(array[i]==1){
                counter++;
                maximum=max(maximum,counter);
            }
            else{
                counter=0;
            }
        }
        return maximum;
    }
};
