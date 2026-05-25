class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while(low<= high){
            int mid =(low+high)/ 2;

            if(arr[mid] == k){
                ans =mid;
                high =mid-1;
            }
            else if(arr[mid]>k){
                high = mid-1;
            }
            else{
                low =mid+1;
            }
        }

        return ans;
    }
};