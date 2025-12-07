class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        long long ans;
        long long low =1;
        long high = n;
        while(low<=high){
            long long mid = (low+high)/2;
            long long val= mid*mid;
            if(val<= n){
                ans = mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return int(ans);
    }
};