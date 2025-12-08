class Solution {
  public:
  
    int expFunc(int mid,int n,int m){
        long long ans = 1;
        for(int i=1 ; i<=n;i++){
            ans = ans*mid;
            if(ans>m) return 2; //flag
        }
        if(ans == m ) return 1; //flag
        return 0;
    }
  
    int nthRoot(int n, int m) {
        
        // Code here
        if (m == 0) return 0;
        int low =1;
        int high = m ;
        while(low<=high){
            int mid = (low+high)/2;
            int midN = expFunc(mid,n,m);
            if(midN == 1){
                return mid;
            }
            else if(midN ==0){
                low = mid+1;
            }
            else {high = mid-1;}
        }
        return -1;
        
    }
};