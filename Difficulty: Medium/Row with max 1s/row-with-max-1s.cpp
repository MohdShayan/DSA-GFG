// User function template for C++
class Solution {
  public:
  
    int countOnesinRow(vector<int> &arr){
        int cnt = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1) cnt++;
        }
        return cnt;
    }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int max = INT_MIN;
        int ans = -1;
        for(int i=0;i<arr.size();i++){
            if(countOnesinRow(arr[i])>max) {
                max = countOnesinRow(arr[i]);
                ans = i;
            }
        }
        return ans;
        
    }
};