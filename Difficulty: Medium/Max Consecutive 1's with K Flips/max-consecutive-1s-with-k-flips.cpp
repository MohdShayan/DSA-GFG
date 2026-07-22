class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int maxlen=0;
        int left=0,right=0, zero=0;
        
        while(right<arr.size()){
            if(arr[right]==0) zero++;
            
            while(zero>k){
                if(arr[left]==0) zero--;
                left++;
            }
            if(zero<=k){
                maxlen=max(maxlen,right-left+1);
            }
            right++;
        }
        return maxlen;
    }
};
