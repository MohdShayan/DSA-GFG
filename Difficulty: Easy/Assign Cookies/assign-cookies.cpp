class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // code here
        sort(greed.begin(),greed.end());
        sort(cookie.begin(),cookie.end());
        
        int i=0,j=0;
        while(i<greed.size() && j<cookie.size()){
            if(greed[i] <=cookie[j]){i++;}
            j++;
            
        }
        return i;
    }
};