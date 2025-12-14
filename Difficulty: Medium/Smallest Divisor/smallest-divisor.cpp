class Solution {
  public:
    
    int sumDivisors(vector<int> &arr,int div){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum = sum + ceil((double)(arr[i])/(double)(div));
        }
        return sum;
    }
  
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        int low =1;
        int ans;
        int high = *max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid = (low+high)/2;
          
            if(sumDivisors(arr,mid) <= k){
                ans =mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
        
    }
};
