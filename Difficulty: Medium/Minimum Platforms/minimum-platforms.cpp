class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int cnt=0;
        int mxCnt =0;
        int i=0,j=0;
        
        while(i<arr.size()){
            if(arr[i]<=dep[j]){
                i++;
                cnt++;
            }
            else{
                cnt--;
                j++;
            }
            mxCnt = max(cnt,mxCnt);
        }
        return mxCnt;
    }
};
