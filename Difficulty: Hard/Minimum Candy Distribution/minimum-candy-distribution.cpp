class Solution {
  public:
    int minCandy(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i=1;
        int sum =1;
        
        while(i<n){
            if(arr[i]==arr[i-1]){
                sum++;
                i++;
                continue;
            }
            int peak=1;
            while(i<n && arr[i]>arr[i-1]){
                peak++;
                sum = sum +peak;
                i++;
            }
            int down =1;
            while(i<n && arr[i]<arr[i-1]){
                sum = sum +down;
                down++;
                i++;
            }
            if(down>peak){
                sum = sum +(down-peak);
            }
        }
        return sum;
    }
};
