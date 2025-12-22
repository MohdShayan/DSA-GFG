class Solution {
  public:
  int partition(vector <int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

int quickSelect(vector<int> &arr, int low, int high, int k) {
    if (low <= high) {
        int p = partition(arr, low, high);

        if (p == k - 1)
            return arr[p];
        else if (p > k - 1)
            return quickSelect(arr, low, p - 1, k);
        else
            return quickSelect(arr, p + 1, high, k);
    }
    return -1;
}
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
         return quickSelect(arr, 0, n - 1, k);
        
    }
};





