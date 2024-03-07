string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int start=0;
    int end=n-1;

    while(start<end){
        int sum=book[start]+book[end];
        if(sum==target){
            return "YES";
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }
    }
    return "NO";
}
