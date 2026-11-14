class Solution {
  public:
    bool checkWithinK(vector<int>& arr, int k) {
        // code here
        unordered_set<int> st;
        for(int i=0;i<arr.size();i++){
            if (st.count(arr[i])) {
                return true;
            }
            st.insert(arr[i]);
            if(st.size()>k){
                st.erase(arr[i-k]);
            }
        }
        return false;
        
    }
};