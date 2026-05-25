class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map <int,int> mpp;
        vector<int> temp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto it : mpp){
            if(it.second >1) temp.push_back(it.first);
        }
        return temp;
    }
};