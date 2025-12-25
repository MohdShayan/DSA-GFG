class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
    int n = arr.size();
    int low=0;
    int high =n-1;
    int mid= (low+high)/2;
    int ans =-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            ans = mid;
            return ans;
        }
        else if(arr[mid]<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(ans == -1){ return low;}
    return ans;
    
    }
};