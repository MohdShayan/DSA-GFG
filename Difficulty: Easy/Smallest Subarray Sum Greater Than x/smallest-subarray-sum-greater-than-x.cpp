class Solution {
  public:
    int smallestSubWithSum(vector<int>& arr, int x) {
        // code here
        int l=0;
        int r=0;
        int minLen = INT_MAX;
        int sum=0;
        int n=arr.size();
        while(r<n){
            sum = sum + arr[r];
            while(sum>x){
                minLen = min(minLen,r-l+1);
                sum = sum-arr[l++];
            }
            r++;
        }
        return minLen==INT_MAX?0:minLen;
        
    }
};