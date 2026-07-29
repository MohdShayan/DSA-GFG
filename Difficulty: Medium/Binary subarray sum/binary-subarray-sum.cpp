class Solution {
  public:
  
  int subarrayLessThanGoal(vector<int> nums, int target){
      if(target<0) return 0;
      int l=0,r=0,sum=0,cnt=0;
      
      while(r<nums.size()){
          sum = sum + nums[r];
          while(sum>target){
              sum = sum -nums[l];
              l++;
          }
          cnt = cnt+(r-l+1);
          r++;
      }
    return cnt;
  }
    int numberOfSubarrays(vector<int>& arr, int target) {
        // code here
        return subarrayLessThanGoal(arr,target)-subarrayLessThanGoal(arr,target-1);
    }
};