class Solution {
  public:
    int solve(vector<int>& bt) {
        // code here
        int wt=0;
        int t=0;
        sort(bt.begin(),bt.end());
        for(int i=0;i<bt.size();i++){
            wt = wt + t;
            t=t+bt[i];
        }
        return (wt/bt.size());
    }
};