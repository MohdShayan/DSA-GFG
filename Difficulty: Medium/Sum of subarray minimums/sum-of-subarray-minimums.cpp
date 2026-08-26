class Solution {
  public:
  vector<int> findNse(vector<int> arr){
      int n=arr.size();
      stack<int> st;
      vector<int> nse(n);
      for(int i=n-1;i>=0;i--){
          while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
          nse[i] = st.empty() ? n: st.top();
          st.push(i);
      }
      return nse;
  }

  vector<int> findPsse(vector<int> arr){
      int n=arr.size();
      stack<int> st;
      vector<int> psee(n);
      for(int i=0;i<n;i++){
          while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
          psee[i] = st.empty() ? -1: st.top();
          st.push(i);
      }
      return psee;
  }
    int sumSubMins(vector<int> &arr) {
        // code here
        vector<int> nse = findNse(arr);
        vector<int> psee = findPsse(arr);
        int total =0;
        int MOD = (int)(1e9+7);
        for(int i=0;i<arr.size();i++){
            int l= i-psee[i];
            int r= nse[i]-i;
            total = (total + (r*l*1LL*arr[i])% MOD)% MOD;
        }
        return total;
        
    }
};