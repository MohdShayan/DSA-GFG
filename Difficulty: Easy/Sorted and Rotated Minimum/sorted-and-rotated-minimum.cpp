class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int ans = INT_MAX;
        int low =0;
        int n =arr.size();
        int high = n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){
                ans = min(ans,arr[low]);
                low=mid+1;
            }
            else{
                ans = min(ans,arr[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};