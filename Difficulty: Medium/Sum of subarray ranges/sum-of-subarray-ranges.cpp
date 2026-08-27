class Solution {
  public:
  vector<int> findNse(vector<int> arr){
      int n = arr.size();
      vector<int> nse(n);
      stack<int> st;
      for(int i=n-1;i>=0;i--){
          while(!st.empty() && arr[st.top()]>=arr[i]){st.pop();}
          nse[i]= st.empty() ? n:st.top();
          st.push(i);
      }
      return nse;
  }
  vector<int> findpsee(vector<int> arr){
      int n = arr.size();
      vector<int> psee(n);
      stack<int> st;
      for(int i=0;i<n;i++){
          while(!st.empty() && arr[st.top()]>arr[i]){st.pop();}
          psee[i]= st.empty() ? -1:st.top();
          st.push(i);
      }
      return psee;
  }
  vector<int> findNge(vector<int>& arr) {
      int n = arr.size();
      vector<int> nge(n);
      stack<int> st;

      for (int i = n - 1; i >= 0; i--) {
          while (!st.empty() && arr[st.top()] <= arr[i]) {
              st.pop();
          }

          nge[i] = st.empty() ? n : st.top();
          st.push(i);
      }

      return nge;
  }

  vector<int> findPgee(vector<int>& arr) {
      int n = arr.size();
      vector<int> pgee(n);
      stack<int> st;

      for (int i = 0; i < n; i++) {
          while (!st.empty() && arr[st.top()] < arr[i]) {
              st.pop();
          }

          pgee[i] = st.empty() ? -1 : st.top();
          st.push(i);
      }

      return pgee;
  }
  long long sumMin(vector<int> arr){
      vector<int> nse = findNse(arr);
      vector<int> psee =findpsee(arr);
      long long total =0;
      for(int i=0;i<arr.size();i++){
          int left = i-psee[i];
          int right = nse[i]-i;
          total = total + (right*left*1LL*arr[i]);
      }
      return total;
  }
  long long sumMax(vector<int>& arr) {
      vector<int> nge = findNge(arr);
      vector<int> pgee = findPgee(arr);

      long long total = 0;

      for (int i = 0; i < arr.size(); i++) {
          long long left = i - pgee[i];
          long long right = nge[i] - i;

          total += left * right * arr[i];
      }

      return total;
  }
    int subarrayRanges(vector<int>& arr) {
        // code here
        return sumMax(arr)-sumMin(arr);
    }
};