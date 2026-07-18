class Solution {
  public:
  
    vector<int> getSeive(int n){
        vector<int> primes(n+1,0);
        
        for(int i=2;i<n+1;i++){
            primes[i]=1;
        }
        
        for(int i=2; i*i<=n;i++){
            if(primes[i]==1){
                for(int j=i*i;j<=n;j=j+i){
                    primes[j]=0;
                }
            }
        }
        return primes;
    }
    vector<int> primeRange(int l, int r) {
        // code here
        vector<int> primes =getSeive(r);
       vector<int> ans;
        for(int i=l;i<=r;i++){
        if(primes[i]){
            ans.push_back(i);
        }
            
        }
        
        return ans;
    }
};