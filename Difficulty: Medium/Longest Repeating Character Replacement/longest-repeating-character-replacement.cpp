class Solution {
  public:
    int longestSubstr(string& s, int k) {
        // code here
        int r=0,l=0,maxlen=0,maxf=0;
        vector<int> hash(26);
        
        while(r<s.size()){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            
            if((r-l+1)-maxf>k){
                hash[s[l]-'A']--;
                l++;
            }
            if((r-l+1)-maxf<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};