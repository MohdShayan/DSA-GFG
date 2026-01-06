class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        long long windowSum = 0;
        int n = arr.size();
        
        for(int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        long long maxSum = windowSum;
        
        for(int i = k; i < n; i++) {
            windowSum += arr[i];       
            windowSum -= arr[i - k];   
            maxSum = max(maxSum, windowSum);
        }
        
        return maxSum;
    }
};
  