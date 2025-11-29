// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        
        // code here
        
        sort(arr.begin(), arr.end());
        int low =0;
        int n = arr.size();
        int high = n-1;
        int ceil = -1;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid]>= x ){
                ceil = arr[mid];
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
            
        }
        
        low =0;
        high = n-1;
        int floor = -1;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid]<= x ){
                floor = arr[mid];
                low = mid+1;
            }
            else {
                high = mid - 1;
            }
            
        }
        
        return {floor,ceil};
        
        

    }
};