// User function Template for C++

class Solution {
  public:
    int daysReq(int arr[],int capacity,int n){
        int days=1;
        int load=0;
        for(int i=0;i<n;i++){
            if(load+arr[i]>capacity){
                days++;
                load = arr[i];
            }
            else{
                load = load+arr[i];
            }
        }
        return days;
    }
    
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        int low = *max_element(arr, arr + n);
        int high = accumulate(arr, arr + n, 0);
        
        while(low<=high){
            int mid=(low+high)/2;
            if(daysReq(arr,mid,n)<=d){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};