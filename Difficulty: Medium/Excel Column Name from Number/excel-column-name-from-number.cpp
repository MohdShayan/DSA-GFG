class Solution {
  public:
    string colName(int n) {
        // code here
        string ans="";
        while(n!=0){
            n--;
            int c= n%26;
            n = n/26;
            ans = char('A'+c) + ans;
        }
        return ans;
    }
};