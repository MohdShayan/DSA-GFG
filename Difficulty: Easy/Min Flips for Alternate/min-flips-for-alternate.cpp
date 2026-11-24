class Solution {
  public:
    int minFlips(string &s) {
        // code here
        int cnt1=0,cnt2=0;
        for (int i =0;i< s.size(); i++) {
        
            // 010101
            if (i%2==0 && s[i] != '0')
                cnt1++;
            else if (i%2==1 && s[i]!='1')
                cnt1++;
        
            //101010
            if (i%2 == 0 && s[i] !='1')
                cnt2++;
            else if (i%2== 1 && s[i]!='0')
                cnt2++;
        }
        
        return min(cnt1, cnt2);
    }
};