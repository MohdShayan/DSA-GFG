class Solution {
  public:
  
    int subarraywithlessthaneqlk(vector<int> arr,int k){
        if(k<0) return 0;
        int l=0,r=0,cnt=0;
        unordered_map<int,int> mpp;
        
        while(r<arr.size()){
            mpp[arr[r]]++;
            while(mpp.size()>k){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0) mpp.erase(arr[l]);
                l++;
            }
            cnt = cnt +(r-l+1);
            r++;
        }
        return cnt;
        
    }
    int countAtMostK(vector<int> &arr, int k) {
        // code here
       return subarraywithlessthaneqlk(arr,k);
        
    }
};