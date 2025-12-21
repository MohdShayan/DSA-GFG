class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int index=0;
        int n = arr.size();
        
        for(int i =0;i<n;i++){
            if(arr[i]!= 0){
                arr[index] = arr[i];
                index++;
            }
        }
        
        for(int i=index;i<n;i++){ arr[i]=0;}
    }
};