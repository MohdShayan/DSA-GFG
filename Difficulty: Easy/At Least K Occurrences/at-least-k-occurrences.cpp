class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> mpp;
        for(int x: arr){
            mpp[x]++;
            if(mpp[x]>=k){
                return x;
            }
        }
        return -1;
    }
};