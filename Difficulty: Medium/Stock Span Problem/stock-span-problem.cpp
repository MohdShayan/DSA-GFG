class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<pair<int,int>> st;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && st.top().first <= arr[i]){st.pop();}
                int cnt= i-(st.empty()?-1:st.top().second);
                st.push({arr[i],i});
                ans.push_back(cnt);
        }
        return ans;
    }
};