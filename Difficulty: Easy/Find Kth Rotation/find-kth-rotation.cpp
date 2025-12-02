class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int ans = INT_MAX;
        int index=-1;
        int low =0;
        int n =arr.size();
        int high = n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){
                if(arr[low]<ans){
                ans = arr[low];
                index = low;
                }
                low=mid+1;
            }
            else{
                
                high=mid-1;
                if(arr[mid]<ans){
                ans = arr[mid];
                index=mid;
                }
            }
        }
        return index;
    }
};
