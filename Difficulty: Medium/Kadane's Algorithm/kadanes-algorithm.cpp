class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int currSum = arr[0];
        int maxSum = arr[0];
        
        for(int i=1;i<arr.size();i++){
            currSum = max(currSum + arr[i],arr[i]);
            maxSum = max(currSum,maxSum);
        }
        return maxSum;
    }
};