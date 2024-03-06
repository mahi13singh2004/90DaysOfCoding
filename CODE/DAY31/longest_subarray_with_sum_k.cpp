int longestSubarrayWithSumK(vector<int>array, long long K) {
    int start=0;
    int end=0;
    int n=array.size();
    int length=0;
    long long sum=array[0];

    while(end<n){
        while(sum>K && start<=end){
            sum=sum-array[start];
            start++;
        }
        if(sum==K){
            length=max(length,end-start+1);
        }
        end++;
        if(end<n){
            sum=sum+array[end];
        }
    }
    return length;
}
