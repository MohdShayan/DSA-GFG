class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        int flag= true;
        unordered_map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]=1;
        }
        for(int j=start;j<=end;j++){
            if(mpp[j]!=1) return false;
        }
        return flag;
    }
};
