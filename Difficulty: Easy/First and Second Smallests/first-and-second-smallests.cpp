class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {

        int smallest = INT_MAX;
        int sec_small = INT_MAX;

        for (int i=0;i<arr.size(); i++) {
            if (arr[i]<smallest) {
                sec_small=smallest;
                smallest=arr[i];
            }
            else if (arr[i]>smallest && arr[i]<sec_small) {
                sec_small = arr[i];
            }
        }

        if (sec_small==INT_MAX) return {-1};

        return {smallest, sec_small};
    }
};