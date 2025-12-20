class Solution {
  public:
      int countSubarrays(vector<int>& nums, int maxSum) {
        int cntArray = 1;
        int currentSum = 0;

        for (int num : nums) {
            if (currentSum + num <= maxSum) {
                currentSum += num;
            } else {
                cntArray++;
                currentSum = num;
            }
        }
        return cntArray;
    }
    int splitArray(vector<int>& arr, int k) {
        // code here
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(), 0);

        while (low<= high) {
            int mid= (low+high)/2;
            int subarrays= countSubarrays(arr, mid);
            if (subarrays> k) {
                low = mid+ 1;
            } else {
                high = mid- 1; 
            }
        }
        return low;
        
    }
};