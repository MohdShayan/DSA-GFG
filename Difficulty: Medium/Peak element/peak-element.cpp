class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
         int n = arr.size();
        if(n==1) return 0;
        if(arr[0]>arr[1]) return 0;
        if(arr[n-1]>arr[n-2]) return n-1;
        int low =1;
        int high = n-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                low = mid+1; // you are on increasing curve eliminate left part
            }
            else if(arr[mid]>arr[mid+1]){
                high=mid-1; //you are decreasing curve elimiate right part
            }
            else{
                low = mid+1; // you are negative peak go on either side (left)
            }
        }
        return -1;
    }
};