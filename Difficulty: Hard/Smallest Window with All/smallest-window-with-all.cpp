class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        int l=0,r=0,cnt=0;
        int sind =-1;
        int minlen=INT_MAX;
        unordered_map <char,int> mpp;
        
        for(char c : p){
            mpp[c]++;
        }
        
        while(r<s.size()){
            if(mpp[s[r]]>0){
                cnt++;
            }
            mpp[s[r]]--;
            
            while(cnt == p.size()){
                if(r-l+1<minlen){
                    minlen = r-l+1;
                    sind=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0) cnt --;
                l++;
            }
        r++;
        }
        return sind==-1?"":s.substr(sind,minlen);
    }
};