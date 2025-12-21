class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        k = k%arr.size();
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
    }
};
