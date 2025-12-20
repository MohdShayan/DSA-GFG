class Solution {
  public:
    
    int countPainters(vector<int> &arr,int k){
        int cntPainters=1;
        int timeperpainter = 0;
        for(int i=0;i<arr.size();i++){
            if(timeperpainter + arr[i]<=k){
                timeperpainter+= arr[i];
            }
            else{
                cntPainters++;
                timeperpainter=arr[i];
            }
        }
        return cntPainters;
    }
    
    int minTime(vector<int>& arr, int k) {
        // code here
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        
        while(low<=high){
            int mid= (low+high)/2;
            int painter = countPainters(arr,mid);
            if(painter>k){
                low = mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};