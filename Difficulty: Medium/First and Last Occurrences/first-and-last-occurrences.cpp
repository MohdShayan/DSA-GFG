class Solution {
  public:
  
      int lowerBound(vector<int>& arr, int target) {
        // code here
        int low =0;
        int n = arr.size();
        int high = n-1;
        int ans = n;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid]>= target ){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
            
        }
    return ans;
        
    }
    
    int upperBound(vector<int>& arr, int target) {
        // code here
        int low =0;
        int n = arr.size();
        int high = n-1;
        int ans = n;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid]> target ){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
            
        }
    return ans;
    }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int lb = lowerBound(arr,x);
        if(arr[lb]!=x || lb==-1){ return {-1,-1}; }
        return {lb,upperBound(arr,x)-1};
        
    }
};