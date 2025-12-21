class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long sumuptoN= (long long)(n+1)*(n+2)/2;
         long long sumArr =0;
         for(int x:arr){ sumArr+= x;}
        
        
        return int(sumuptoN-sumArr);
    }
};